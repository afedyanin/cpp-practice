#include <cassert>
#include <cctype>
#include <string>

bool CheckIsUpper(char c) {
    return c != std::tolower(c);
}

bool CheckIsLower(char c) {
    return c != std::toupper(c);
}

char SwitchCase(char c) {
    if (CheckIsUpper(c)) {
        return static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    }
    if (CheckIsLower(c)) {
        return static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
    }
    return c;
}

std::string SwitchCase(const std::string& str) {
    std::string result;
    result.reserve(str.size());

    for (char c : str) {
        result += SwitchCase(c);
    }

    return result;
}

void TestLetter() {
    assert(SwitchCase('a') == 'A');
    assert(SwitchCase('b') == 'B');
    assert(SwitchCase('e') == 'E');
    assert(SwitchCase('x') == 'X');

    assert(SwitchCase('A') == 'a');
    assert(SwitchCase('B') == 'b');
    assert(SwitchCase('E') == 'e');
    assert(SwitchCase('X') == 'x');
}

void TestNoLetter() {
    assert(SwitchCase('!') == '!');
    assert(SwitchCase('-') == '-');
    assert(SwitchCase(' ') == ' ');
    assert(SwitchCase('\0') == '\0');
}

void TestString() {
    assert(SwitchCase("hello") == "HELLO");
    assert(SwitchCase("HELLO") == "hello");
    assert(SwitchCase("Hello") == "hELLO");
    assert(SwitchCase("hELLO") == "Hello");

    assert(SwitchCase("I love C++!") == "i LOVE c++!");
    assert(SwitchCase("i LOVE c++!") == "I love C++!");
}

int main() {
    TestLetter();
    TestNoLetter();
    TestString();
}
