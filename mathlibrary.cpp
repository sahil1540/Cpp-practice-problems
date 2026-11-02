
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

    int choice;
    double num1, num2;

    cout << "                         C++ MATH TOOLKIT\n";
    

    cout << "\n1. Square Root";
    cout << "\n2. Power";
    cout << "\n3. Absolute Value";
    cout << "\n4. Round Number";
    cout << "\n5. Ceiling";
    cout << "\n6. Floor";
    cout << "\n7. Maximum";
    cout << "\n8. Minimum";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Enter number: ";
            cin >> num1;

            if (num1 >= 0)
                cout << "Square Root = " << sqrt(num1);
            else
                cout << "Invalid input!";
            break;

        case 2:
            cout << "Enter base: ";
            cin >> num1;
            cout << "Enter exponent: ";
            cin >> num2;

            cout << "Power = " << pow(num1, num2);
            break;

        case 3:
            cout << "Enter number: ";
            cin >> num1;

            cout << "Absolute Value = " << abs(num1);
            break;

        case 4:
            cout << "Enter number: ";
            cin >> num1;

            cout << "Rounded Value = " << round(num1);
            break;

        case 5:
            cout << "Enter number: ";
            cin >> num1;

            cout << "Ceiling = " << ceil(num1);
            break;

        case 6:
            cout << "Enter number: ";
            cin >> num1;

            cout << "Floor = " << floor(num1);
            break;

        case 7:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            cout << "Maximum = " << max(num1, num2);
            break;

        case 8:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            cout << "Minimum = " << min(num1, num2);
            break;

        default:
            cout << "Invalid choice!";
    }

    cout << "\n\nThank you for using Math Toolkit!\n";

    return 0;
}
