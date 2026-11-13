#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>

#include "Topic01.h"

void sample13()
{
    int num1;
    int num2;
    std::cin >> num1 >> num2;

    int sum = num1 + num2;
    std::string line = std::to_string(num1) + std::to_string(num2);
    int lineNum = std::stoi(line);

    std::cout << sum << std::endl << line << std::endl << lineNum - sum << std::endl;
}


void sample12()
{
    std::string line;
    std::getline(std::cin, line);
    int index;
    char sym;
    std::cin >> index;
    std::cin >> sym;
    line[index] = sym;
    std::cout <<  line << std::endl;
}


void sample11()
{
    std::string line;
    std::getline(std::cin, line);
    int index;
    std::cin >> index;
    std::cout << line[index -1] << line[index] << line[index + 1] << std::endl;
}

int sample10()
{
    int week_day;
    int days_left;
    std::cin >> week_day >> days_left;
    int weeks = days_left % 7;
    int today = (week_day + days_left - 1) % 7 + 1;
    std::cout << weeks << std::endl << today << std::endl;

    return 0;
}


int sample09()
{
    int count;

    std::cin >> count;
    std::cout << "Эники, беники ели вареники," << std::endl;
    std::cout << "Эники, беники съели вареники," << std::endl;
    std::cout << "Эники, беники, хоп!" << std::endl;
    std::cout << 10 % count << std::endl;

    return 0;
}


int sample08()
{
    double length, width, high;
    double l2, w2;

    std::cin >> length >> width >> high;
    std::cin >> l2 >> w2;

    double s_room = (length * high + width * high) * 2;
    double s2 = l2 * w2;
    double count = std::ceil(s_room / s2);

    std::cout << count << std::endl;

    return 0;
}


int sample07()
{
    double price1, price2, price3, price4;
    int count;
    double amount = 0;

    double p1 = 0.15;
    double p2 = 0.05;
    double p3 = 0.05;
    double p4 = 0.1;

    std::cout << "Тыква" << std::endl;
    std::cin >> price1;

    std::cout << "Лук" << std::endl;
    std::cin >> price2;

    std::cout << "Морковь" << std::endl;
    std::cin >> price3;

    std::cout << "Кокосовое молоко" << std::endl;
    std::cin >> price4;

    std::cout << "Количество порций" << std::endl;
    std::cin >> count;

    amount = (price1 * p1) + (price2 * p2) + (price3 * p3) + +(price4 * p4);
    amount *= count;

    std::cout << "Стоимость: " << amount << std::endl;

    return 0;
}


int sample06()
{
    int start;
    int increment;
    int count;

    std::cin >> start >> increment >> count;

    int end = start + (increment * (count - 1));
    int sum = (start + end) * count / 2;

    std::cout << end << std::endl << sum << std::endl;

    return 0;
}

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

