#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Static variable declaration...
    static int totalAccounts;

    BankAccount(string name, double b) {
        accountHolder = name;
        balance = b;
        totalAccounts++; // Increment account count on object creation...
    }

    void displayDetails() {
        cout << "Account Holder: " << accountHolder << " | Balance: $" << balance << endl;
    }
};

// Static variable initialization outside class...
int BankAccount::totalAccounts = 0;

int main() {
    BankAccount acc1("Ali", 5000.0);
    BankAccount acc2("Usman", 12000.0);
    BankAccount acc3("Sara", 8500.0);

    acc1.displayDetails();
    acc2.displayDetails();
    acc3.displayDetails();

    cout << "\nTotal Bank Accounts Created: " << BankAccount::totalAccounts << endl;

    return 0;
}
