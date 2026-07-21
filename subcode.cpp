#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\n===== MENU =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Addition = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Subtraction = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Multiplication = " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 != 0)
                cout << "Division = " << (float)num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;

        case 5:
            if (num2 != 0)
                cout << "Modulo = " << num1 % num2 << endl;
            else
                cout << "Error! Modulo by zero is not allowed." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
