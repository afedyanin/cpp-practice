#include <cassert>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdint>

int CharToDigit(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 10;
    }
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 10;
    }
    return -1;
}

char DigitToChar(int digit) {
    if (digit >= 0 && digit <= 9) {
        return static_cast<char>('0' + digit);
    }
    return static_cast<char>('A' + (digit - 10));
}

int StringToNumber(const std::string& s, int base, bool& was_error) {
    was_error = false;

    if (base < 2 || base > 36 || s.empty()) {
        was_error = true;
        return 0;
    }

    int sign = 1;
    size_t start = 0;

    if (s[0] == '-') {
        sign = -1;
        start = 1;
    }
    else if (s[0] == '+') {
        start = 1;
    }

    // Если строка состоит только из знака '+' или '-' без цифр
    if (start == s.size()) {
        was_error = true;
        return 0;
    }

    int result = 0;
    for (size_t i = start; i < s.size(); ++i) {
        int digit = CharToDigit(s[i]);
        if (digit == -1 || digit >= base) {
            was_error = true;
            return 0;
        }
        result = result * base + digit;
    }

    return result * sign;
}

std::string NumberToString(std::int64_t number, int base) {
    if (base < 2 || base > 36) {
        return "";
    }

    if (number == 0) {
        return "0";
    }

    bool is_negative = number < 0;
    std::uint64_t abs_num = is_negative
        ? static_cast<std::uint64_t>(-(number + 1)) + 1
        : static_cast<std::uint64_t>(number);

    std::string result;
    while (abs_num > 0) {
        int remainder = static_cast<int>(abs_num % base);
        result += DigitToChar(remainder);
        abs_num /= base;
    }

    if (is_negative) {
        result += '-';
    }

    std::reverse(result.begin(), result.end());
    return result;
}

std::string ConvertNotation(const std::string& src_number, int src_base, int dst_base) {
    bool was_error = false;
    int decimal_value = StringToNumber(src_number, src_base, was_error);

    if (was_error) {
        return "";
    }

    return NumberToString(decimal_value, dst_base);
}

int main() {
    using namespace std::literals;
    std::string src_string;
    int src_base, dst_base;

    std::cin >> src_string >> src_base >> dst_base;

    if (auto result = ConvertNotation(src_string, src_base, dst_base); !result.empty()) {
        std::cout << result << std::endl;
    }
    else {
        std::cout << "ERROR"s << std::endl;
    }
}
