#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: " << amount << "\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: " << amount << "\n";
        } else {
            std::cout << "Transaction denied.\n";
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount myAccount("Chonny", 500.0);

    myAccount.deposit(150.0);
    myAccount.withdraw(100.0);

    std::cout << "Account: Chonny" << "\n";
    std::cout << "Final Balance: " << myAccount.getBalance() << "\n";

    return 0;
}