#include<iostream>
using namespace std;

// Program: Simple ATM Machine
// Description: Basic banking operations like deposit, withdraw, check balance

int main() {
    int balance = 10000, choice, amount;
    
    cout << "=== Welcome to My ATM ===" << endl;
    cout << "Initial Balance: Rs 10000" << endl;
    
    while(true) {
        cout << "\n---------- MENU ----------" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if(choice == 1) {
            cout << "Your Current Balance: Rs " << balance << endl;
        }
        else if(choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Rs " << amount << " Deposited Successfully!" << endl;
            cout << "New Balance: Rs " << balance << endl;
        }
        else if(choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if(amount <= balance) {
                balance -= amount;
                cout << "Rs " << amount << " Withdrawn Successfully!" << endl;
                cout << "Remaining Balance: Rs " << balance << endl;
            } else {
                cout << "Error: Insufficient Balance!" << endl;
            }
        }
        else if(choice == 4) {
            cout << "Thank you for using our ATM!" << endl;
            break;
        }
        else {
            cout << "Invalid Choice! Please try again." << endl;
        }
    }
    return 0;
}
