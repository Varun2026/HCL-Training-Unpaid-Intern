#include <iostream>

class WalletAuditor;

class Wallet {
private:
    double balance = 0;
    friend class WalletAuditor;
public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }
};

class WalletAuditor {
public:
    void report(const Wallet& w) {
        std::cout << w.balance << std::endl;
    }
};

class ThirdClass {
public:
    void tryAccess(const Wallet& w) {
    }
};

int main() {
    Wallet w;
    w.deposit(100);
    w.withdraw(50);
    WalletAuditor a;
    a.report(w);
    ThirdClass t;
    return 0;
}