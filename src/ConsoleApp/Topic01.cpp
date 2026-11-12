#include <iostream>
#include <cmath>
#include <windows.h>

#include "Topic01.h"

int sample05()
{
    // Цена обеда.
    double cost;
    // Цена компонента.
    double price;
    // Размер скидки.
    double discount;

    std::cout << "Введите цену первого блюда:" << std::endl;
    // Для переменной price первой идёт операция записи (чтение
    // из потока), её можно не инициализировать.
    std::cin >> price;

    // Для переменной cost первой также идёт операция записи.
    cost = price;

    std::cout << "Введите цену второго блюда:" << std::endl;
    std::cin >> price;

    cost = cost + price;

    std::cout << "Введите размер скидки в процентах:" << std::endl;
    std::cin >> discount;

    // Чтобы применить скидку, нужно стоимость умножить на 
    // 1 минус процент скидки, переведённый в дробь.
    cost = cost * (1 - discount / 100.);

    std::cout << "Стоимость вашего обеда: " << cost << std::endl;

    return 0;
}

int sample04()
{
    double farengate;
    double celsium;

    std::cout << "Введите температуру в градусах Фаренгейта: ";
    std::cin >> farengate;
    celsium = (farengate - 32) * 5 / 9;
    celsium = std::round(celsium * 10) / 10;

    std::cout << "Температура в градусах Цельсия: " << celsium << std::endl;

    return 0;
}

int sample03()
{
    int num1;
    int num2;
    int num3;

    std::cin >> num1 >> num2 >> num3;
    std::cout << "Сумма чисел " << num1 << ", " << num2 << " и " << num3 << " равна " << num1 + num2 + num3 << std::endl;

    return 0;
}

int sample02()
{
    double num1;
    double num2;

    std::cin >> num1;
    std::cin >> num2;

    std::cout << "Сумма: " << num1 + num2 << std::endl;
    std::cout << "Разность: " << num1 - num2 << std::endl;
    std::cout << "Произведение: " << num1 * num2 << std::endl;
    std::cout << "Отношение: " << num1 / num2 << std::endl;

    return 0;
}

int sample01()
{
    std::cout << "Hello World!\n";
    return 0;
}

