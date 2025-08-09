#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};
main() {
    BankAccount acc(1000);
    acc.displayBalance();
    acc.deposit(500);
    acc.withdraw(300);
    acc.withdraw(1500);
    acc.displayBalance();
}
