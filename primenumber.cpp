
#include <iostream>
using namespace std;

int main() {
    int num;
    int i;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        prime = false;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime == true) {
        cout << num << " is a prime number";
    } else {
        cout << num << " is not a prime number";
    }

    return 0;
}
  
