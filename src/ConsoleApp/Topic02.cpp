#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>
#include <algorithm>

#include "Topic02.h"

int sample_calc()
{
    double a, b;
    std::string op;

    // Считываем два числа и знак операции
    std::cin >> a >> op >> b;

    // Проверяем, успешно ли прошло чтение всех трёх элементов
    if (!std::cin) {
        std::cerr << "Incorrect input\n";
        return 0;
    }

    // Выполняем соответствующую арифметическую операцию
    if (op == "+") {
        std::cout << a + b << "\n";
    }
    else if (op == "-") {
        std::cout << a - b << "\n";
    }
    else if (op == "*") {
        std::cout << a * b << "\n";
    }
    else if (op == "/") {
        std::cout << a / b << "\n";
    }
    else {
        std::cerr << "Incorrect operation\n";
    }

    return 0;
}

int sample305()
{
    int n, m, k;
    std::cin >> n >> m >> k;

    // Сортируем три числа по возрастанию (n <= m <= k) с помощью обменов
    if (n > m) {
        int temp = n;
        n = m;
        m = temp;
    }
    if (m > k) {
        int temp = m;
        m = k;
        k = temp;
    }
    if (n > m) {
        int temp = n;
        n = m;
        m = temp;
    }

    // После сортировки медиана гарантированно находится в переменной m
    std::cout << m << "\n";

    return 0;
}

int sample304()
{
    int n, m, k;
    std::cin >> n >> m >> k;

    // Предполагаем, что первое число — и минимальное, и максимальное
    int min_val = n;
    int max_val = n;

    // Сравниваем со вторым числом
    if (m < min_val) {
        min_val = m;
    }
    if (m > max_val) {
        max_val = m;
    }

    // Сравниваем с третьим числом
    if (k < min_val) {
        min_val = k;
    }
    if (k > max_val) {
        max_val = k;
    }

    std::cout << min_val << " " << max_val << "\n";

    return 0;
}


void sample303()
{
    int num1, num2;
    std::cin >> num1 >> num2;

    if (num1 > num2)
    {
        std::cout << "Число " << num1 << " больше" << std::endl;
    }
    else if (num1 == num2)
    {
        std::cout << "Числа равны" << std::endl;
    }
    else
    {
        std::cout << "Число " << num2 << " больше" << std::endl;
    }
}


void sample302()
{
    int num;
    std::cin >> num;

    if (num % 2 == 0)
    {
        std::cout << "Число " << num << " чётное" << std::endl;
    }
    else
    {
        std::cout << "Число " << num << " нечётное" << std::endl;
    }
}

void sample301()
{
    std::string password;
    std::cin >> password;

    if (password == "COOLPETYA111")
    {
        std::cout << "Пароль верный" << std::endl;
    }
    else
    {
        std::cout << "Пароль неверный" << std::endl;
    }
}
