#include <iostream>

int main() {
    char op;
    double num1, num2;

    std::cout << "=== Simple C++ Calculator ===\n";
    
    // Step 1: Input the operator
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    // Step 2: Input the operands
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Step 3: Process the operation
    switch (op) {
        case '+':
            std::cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
            break;

        case '-':
            std::cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
            break;

        case '*':
            std::cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
            break;

        case '/':
            // Check for division by zero to prevent runtime errors
            if (num2 == 0) {
                std::cout << "Error: Division by zero is not allowed.\n";
            } else {
                std::cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
            }
            break;

        default:
            // Handles any invalid operator input
            std::cout << "Error: Invalid operator entered.\n";
            break;
    }

    return 0;
}
