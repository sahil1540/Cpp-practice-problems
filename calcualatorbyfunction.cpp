
#include <iostream>
using namespace std;

// Addition
double add(double a, double b) {
    return a + b;
}

// Subtraction
double subtract(double a, double b) {
    return a - b;
}

// Multiplication
double multiply(double a, double b) {
    return a * b;
}

// Division
double divide(double a, double b) {
    return a / b;
}

int main() {

    int choice;
    double num1, num2;

    cout << "       MY CALCULATOR      \n";
    cout << "======****************======\n";

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(choice) {

        case 1:
            cout << "Result: " << add(num1, num2);
            break;

        case 2:
            cout << "Result: " << subtract(num1, num2);
            break;

        case 3:
            cout << "Result: " << multiply(num1, num2);
            break;

        case 4:
            if(num2 == 0) {
                cout << "Error: Cannot divide by zero!";
            }
            else {
                cout << "Result: " << divide(num1, num2);
            }
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
