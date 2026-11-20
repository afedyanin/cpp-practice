#include "calculator.h"

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

bool ReadNumber(Number& result)
{
    if (cin >> result) {
        return true;
    }

    cerr << "Error: Numeric operand expected\n";
    return false;
}

bool RunCalculatorCycle()
{
    Number currentValue = 0;
    if (!ReadNumber(currentValue)) {
        return false;
    }

    Number memory = 0;
    bool isMemorySet = false;

    string command;
    while (cin >> command) {
        if (command == "=") {
            cout << currentValue << '\n';
        }
        else if (command == "c") {
            currentValue = 0;
        }
        else if (command == ":") {
            if (!ReadNumber(currentValue)) {
                return false;
            }
        }
        else if (command == "s") {
            memory = currentValue;
            isMemorySet = true;
        }
        else if (command == "l") {
            if (!isMemorySet) {
                cerr << "Error: Memory is empty\n";
                return false;
            }

            currentValue = memory;
        }
        else if (command == "q") {
            return true;
        }
        else if (command == "+" || command == "-" || command == "*" || command == "/" || command == "**") {
            Number operand = 0;
            if (!ReadNumber(operand)) {
                return false;
            }

            if (command == "+") {
                currentValue += operand;
            }
            else if (command == "-") {
                currentValue -= operand;
            }
            else if (command == "*") {
                currentValue *= operand;
            }
            else if (command == "/") {
                currentValue /= operand;
            }
            else if (command == "**") {
                currentValue = pow(currentValue, operand);
            }
        }
        else {
            cerr << "Error: Unknown token " << command << '\n';
            return false;
        }
    }

    return false;
}
