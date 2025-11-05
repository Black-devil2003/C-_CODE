#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string holderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        holderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount!" << endl;
            return;
        }
        balance += amount;
        cout << "Deposited: " << fixed << setprecision(2) << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << fixed << setprecision(2) << amount << endl;
        }
    }

    void display() const {
        cout << "\n--- Account Info ---" << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << fixed << setprecision(2) << balance << endl;
    }
};

int main() {
    BankAccount acc(1001, "T.K.S", 5000.0);
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.display();

    return 0;
}
