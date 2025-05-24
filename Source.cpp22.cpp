#include <iostream>
using namespace std;

int main() {
    double balance = 10000.0;
    int pin =4231, inputPin;
    int choice;
    double amount;

    cout << "Welcome to the ATM Machine\n";
    cout << "Please enter your PIN: ";
    cin >> inputPin;

    if (inputPin != pin) {
        cout << "Incorrect PIN. Exiting...\n";
        return 0;
    }

    do {
        cout << "**** ATM Menu **** \n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Your balance is: $" << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: $";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposited successfully.\n";
            }
            else {
                cout << "Invalid amount.\n";
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful.\n";
            }
            else {
                cout << "Insufficient balance or invalid amount.\n";
            }
            break;

        case 4:
            cout << "Thank you for using the ATM. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
