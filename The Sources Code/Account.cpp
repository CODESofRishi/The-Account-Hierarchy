#include "Account.h"

Account::Account(const std::string &name, const double &balance)
    :name {name}, balance {balance} {}

bool Account::deposit(const double &amount) {
    if (amount < 0) return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(const double &amount) {
    if (balance-amount >= 0) {
        balance -= amount;
        return true;
    }
    else return false;
}

double Account::get_balance() const {
    return balance;
}

std::ostream& operator<<(std::ostream &os, const Account &rhs) {
    os << "[Account: " << rhs.name << " Balance: " << rhs.balance << "]";
    return os;
}
