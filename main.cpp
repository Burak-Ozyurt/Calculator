#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        }
        else {
            cout << "Error: Division by zero!" << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator!" << endl;
        break;
    }

    return 0;
}