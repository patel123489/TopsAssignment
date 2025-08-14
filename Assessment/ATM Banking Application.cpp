#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNum, double initialBalance) {
        accountHolder = name;
        accountNumber = accNum;
        balance = initialBalance;
    }
    void displayDetails() const {
        cout << "\n----- Account Details -----";
        cout << "\nAccount Holder:" << accountHolder;
        cout << "\nAccount Number:" << accountNumber;
        cout << "\nBalance:" << balance << endl;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "?" << amount << " deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "?" << amount << " withdrawn successfully.\n";
        } else {
            cout << "Invalid or Insufficient balance!\n";
        }
    }
    void checkBalance() const {
    	cout<<"********************";
        cout<< "\n Current Balance:" << balance << endl;
        cout<<"********************";
    }
};
// Main class for ATM
class ATM {
public:
    static void showMenu() { 
        cout << "\n===== ATM MENU =====";
        cout << "\n1. Display Account Details";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Check Balance";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
    }
};
main() {
    string name;
    int accNum;
    double initialBalance;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Initial Balance:";
    cin >> initialBalance;

    // Creating BankAccount object using constructor
    BankAccount account(name, accNum, initialBalance);
    
    int choice;
    do {
        ATM::showMenu(); 
        cin >> choice;

        switch (choice) {
            case 1:
                account.displayDetails();
                break;
            case 2: {
                double depositAmount;
                cout << "Enter amount to deposit: ?";
                cin >> depositAmount;
                account.deposit(depositAmount);
                break;
            }
            case 3: {
                double withdrawAmount;
                cout << "Enter amount to withdraw: ?";
                cin >> withdrawAmount;
                account.withdraw(withdrawAmount);
                break;
            }
            case 4:
                account.checkBalance();
                break;
            case 5:
                cout << "Thank you for using our ATM!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } 
	while (choice != 5);
}
