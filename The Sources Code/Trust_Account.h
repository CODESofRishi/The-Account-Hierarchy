#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include <string>
#include "Saving_Account.h"

class Trust_Account: public Saving_Account {
    friend std::ostream& operator<<(std::ostream &os, const Trust_Account &rhs);

private:
    static double inspect_bal(const double &bal);
    static double inspect_rate(const double &rate);

protected:
    size_t cnt_withdraw;

public:
    Trust_Account(const std::string &name = "None", const double &balance = 0.0, const double &int_rate = 0.0);
    bool deposit(double amount);
    bool withdraw(const double &amount);
};

#endif // _TRUST_ACCOUNT_H_
