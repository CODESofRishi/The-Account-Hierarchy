#include <string>
#include "Checking_Account.h"

double Checking_Account::inspect_fee(const double &fee_amnt) {
    return ((fee_amnt < 0) ? 0.0: fee_amnt);
}

double Checking_Account::inspect_balance(const double &bal) {
    return ((bal < 0) ? 0.0: bal);
}

Checking_Account::Checking_Account(const std::string &name, const double &amount, const double &fee)
    :Account(name, inspect_balance(amount)), fee {inspect_fee(fee)} {}

bool Checking_Account::withdraw(const double &amount) {
    if (amount < 0) return false;
    return Account::withdraw(amount+fee);
}

std::ostream& operator<<(std::ostream &os, const Checking_Account &rhs) {
    os << "[Account: " << rhs.name << " Balance: " << rhs.balance << " Fee: " << rhs.fee <<"]";
    return os;
}
