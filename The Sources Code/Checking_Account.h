#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <string>
#include "Account.h"

class Checking_Account: public Account {
    friend std::ostream& operator<<(std::ostream &os, const Checking_Account &rhs);

private:
    static constexpr double def_fee {0.0};
    static constexpr double def_balance {0.0};
    static constexpr const char *def_name {"None"};
    static double inspect_fee(const double &fee_amnt);
    static double inspect_balance(const double &bal);

protected:
    double fee;

public:
    Checking_Account(const std::string &name = def_name, const double &amount = def_balance, const double &fee = def_fee);
    bool withdraw(const double &amount);
};

#endif // _CHECKING_ACCOUNT_H_
