#include <iostream>
#include <string>

using namespace std;

int calc001() {
    double result;
    if (!(cin >> result)) {
        cerr << "Error: Numeric operand expected\n";
        return 0;
    }

    string command;
    while (cin >> command) {
        if (command == "+") {
            double operand;
            if (!(cin >> operand)) {
                cerr << "Error: Numeric operand expected\n";
                return 0;
            }
            result += operand;
            cout << result << '\n';
        }
        else if (command == "q") {
            break;
        }
        else {
            cerr << "Error: Unknown token " << command << '\n';
            return 0;
        }
    }

    return 0;
}

int calc002() {
    double result;

    if (!(cin >> result)) {
        cerr << "Error: Numeric operand expected\n";
        return 0;
    }

    string command;
    while (cin >> command) {
        if (command == "=") {
            cout << result << '\n';
        }
        else if (command == "q") {
            break;
        }
        else if (command == "+" || command == "-" || command == "*" || command == "/" || command == "**") {
            double operand;
            if (!(cin >> operand)) {
                cerr << "Error: Numeric operand expected\n";
                return 0;
            }

            if (command == "+") {
                result += operand;
            }
            else if (command == "-") {
                result -= operand;
            }
            else if (command == "*") {
                result *= operand;
            }
            else if (command == "/") {
                result /= operand;
            }
            else if (command == "**") {
                result = std::pow(result, operand);
            }
        }
        else {
            cerr << "Error: Unknown token " << command << '\n';
            return 0;
        }
    }

    return 0;
}

int calc003() {
    double result;
    if (!(cin >> result)) {
        cerr << "Error: Numeric operand expected\n";
        return 0;
    }

    string command;
    while (cin >> command) {
        if (command == "=") {
            cout << result << '\n';
        }
        else if (command == "c") {
            result = 0;
        }
        else if (command == ":") {
            double operand;
            if (!(cin >> operand)) {
                cerr << "Error: Numeric operand expected\n";
                return 0;
            }
            result = operand;
        }
        else if (command == "q") {
            break;
        }
        else if (command == "+" || command == "-" || command == "*" || command == "/" || command == "**") {
            double operand;
            if (!(cin >> operand)) {
                cerr << "Error: Numeric operand expected\n";
                return 0;
            }

            if (command == "+") {
                result += operand;
            }
            else if (command == "-") {
                result -= operand;
            }
            else if (command == "*") {
                result *= operand;
            }
            else if (command == "/") {
                result /= operand;
            }
            else if (command == "**") {
                result = std::pow(result, operand);
            }
        }
        else {
            cerr << "Error: Unknown token " << command << '\n';
            return 0;
        }
    }

    return 0;
}

int calc004() {
    double current_term;
    if (!(cin >> current_term)) {
        cerr << "Error: Numeric operand expected\n";
        return 0;
    }

    double result = 0.0;
    double sign = 1.0;

    string command;
    while (cin >> command) {
        if (command == "=") {
            result += sign * current_term;
            cout << result << '\n';
            break;
        }
        else if (command == "+" || command == "-") {
            result += sign * current_term;
            sign = (command == "+") ? 1.0 : -1.0;

            if (!(cin >> current_term)) {
                cerr << "Error: Numeric operand expected\n";
                return 0;
            }
        }
        else if (command == "*" || command == "/") {
            double operand;
            if (!(cin >> operand)) {
                cerr << "Error: Numeric operand expected\n";
                return 0;
            }

            if (command == "*") {
                current_term *= operand;
            }
            else {
                current_term /= operand;
            }
        }
        else {
            cerr << "Error: Unknown token " << command << '\n';
            return 0;
        }
    }

    return 0;
}