#include <iostream>
#include "../include/calculator.h"

using namespace std;

int main()
{
    int choice;
    double num1, num2;

    cout << "===== Calculator Toolkit =====\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (choice)
    {
        case 1:
            cout << "Result: " << addition(num1, num2) << endl;
            break;

        case 2:
            cout << "Result: " << subtraction(num1, num2) << endl;
            break;

        case 3:
            cout << "Result: " << multiplication(num1, num2) << endl;
            break;

        case 4:
            cout << "Result: " << division(num1, num2) << endl;
            break;

        case 5:
            cout << "Result: " << modulusOperator(static_cast<int>(num1), static_cast<int>(num2)) << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}