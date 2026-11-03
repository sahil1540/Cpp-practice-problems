#include <iostream>
using namespace std;

int main() {
    string task1, task2, task3,task4;
    string answer;
    int del;

    cout << "===== MY TO DO LIST =====\n";

    cout << "Enter task 1: ";
    getline(cin, task1);
    cout << "Enter task 2: ";
    getline(cin, task2);
    cout << "Enter task 3: ";
    getline(cin, task3);
    cout << "Enter task 4 : ";
    getline(cin, task4) ;

    cout << "\nDo you want to see today's list? (yes/no): ";
    cin >> answer;

    if (answer == "yes" || answer == "Yes") {
        cout << "\n===== YOUR TASKS =====\n";
        cout << "1. " << task1 << endl;
        cout << "2. " << task2 << endl;
        cout << "3. " << task3 << endl;
        cout << "4. " << task4 << endl;

        cout << "\nDo you want to delete a task? (yes/no): ";
        cin >> answer;

        if (answer == "yes" || answer == "Yes") {
            cout << "Enter task number (1-4): ";
            cin >> del;

            if (del == 1) task1 = "[Deleted]";
            else if (del == 2) task2 = "[Deleted]";
            else if (del == 3) task3 = "[Deleted]";
            else if (del == 4) task4 = "[Deleted]";
            else cout << "Invalid number!\n";

            cout << "\n===== UPDATED TASK LIST =====\n";
            cout << "1. " << task1 << endl;
            cout << "2. " << task2 << endl;
            cout << "3. " << task3 << endl;
            cout << "4. " << task4 << endl;        }
    } else {
        cout << "Byy :) have a nice day !";
    }
    return 0;
}
