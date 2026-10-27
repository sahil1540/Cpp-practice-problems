#include <iostream>
using namespace std;

int main() {
    int choice;
    float temp, convertedTemp;

    cout << "=== SAHIL'S TEMP CONVERTER ===" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        convertedTemp = (temp * 9.0 / 5.0) + 32;
        cout << "Result: " << convertedTemp << " °F" << endl;
    } 
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        convertedTemp = (temp - 32) * 5.0 / 9.0;
        cout << "Result: " << convertedTemp << " °C" << endl;
    } 
    else {
        cout << "Invalid choice, bokya!" << endl;
    }

    return 0;
}
