#include "Saving_Account.h"

Saving_Account::Saving_Account(const std::string &name, const double &balance, const double &int_rate)
    :Account(name, balance), int_rate {int_rate} {}

bool Saving_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

std::ostream& operator<<(std::ostream &os, const Saving_Account &rhs) {
    os << "[Saving Account: " << rhs.name << " balance: " << rhs.balance << " Interest rate: " << rhs.int_rate << "%]";
    return os;
}
