#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

// all below are regular functions

// utility helper functions for Account class

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// utility helper functions for Saving Account class

void display(const std::vector<Saving_Account> &accounts);
void deposit(std::vector<Saving_Account> &accounts, double amount);
void withdraw(std::vector<Saving_Account> &accounts, double amount);

// utility helper functions for Checking Account Class

void display(const std::vector<Checking_Account> &accounts);
void deposit(std::vector<Checking_Account> &accounts, const double &amount);
void withdraw(std::vector<Checking_Account> &accounts, const double &amount);

// utility helper functions for Trust Account Class

void display(const std::vector<Trust_Account> &accounts);
void deposit(std::vector<Trust_Account> &accounts, const double &amount);
void withdraw(std::vector<Trust_Account> &accounts, const double &amount);

#endif // _ACCOUNT_UTIL_H_
