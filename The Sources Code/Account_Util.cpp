#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a vector of Account objects
void display(const std::vector<Account> &accounts) {
    std::cout<<"\n==========Accounts=================================================="<<std::endl;
    for (auto const &acc: accounts)
        std::cout<<acc<<std::endl;
}


// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount) {
    std::cout<<"\n==========Depositing to Accounts===================================="<<std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount))
            std::cout<<"Deposited "<<amount<<" to "<<acc<<std::endl;
        else
            std::cout<<"Failed deposit of "<<amount<<" to "<<acc<<std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout<<"\n==========Withdrawing from Accounts=================================="<<std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount))
            std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
        else
            std::cout<<"Failed withdrawal of "<<amount<<" from "<<acc<<std::endl;
    }
}

// -------------------------------------------------------------------------------------------

// Displays Saving Account objects in a vector of Account objects
void display(const std::vector<Saving_Account> &accounts) {
    std::cout<<"\n==========Saving Accounts=================================================="<<std::endl;
    for (auto const &acc: accounts)
        std::cout<<acc<<std::endl;
}


// Deposits supplied amount to each Saving Account object in the vector
void deposit(std::vector<Saving_Account> &accounts, double amount) {
    std::cout<<"\n==========Depositing to Saving Accounts===================================="<<std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount))
            std::cout<<"Deposited "<<amount<<" to "<<acc<<std::endl;
        else
            std::cout<<"Failed deposit of "<<amount<<" to "<<acc<<std::endl;
    }
}

// Withdraw amount from each Saving Account object in the vector
void withdraw(std::vector<Saving_Account> &accounts, double amount) {
    std::cout<<"\n==========Withdrawing from Saving Accounts=================================="<<std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount))
            std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
        else
            std::cout<<"Failed withdrawal of "<<amount<<" from "<<acc<<std::endl;
    }
}

// -------------------------------------------------------------------------------------------

// Display objects of Checking_Account in the vector
void display(const std::vector<Checking_Account> &accounts) {
    std::cout<<"\n==========Checking-Accounts=================================================="<<std::endl;
    for (auto const &acc: accounts) {
        std::cout<<acc<<std::endl;
    }
}

// Deposit amount in objects of the Checking_Account in the vector
void deposit(std::vector<Checking_Account> &accounts, const double &amount) {
    std::cout<<"\n==========Depositing Checking-Accounts======================================="<<std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount))
            std::cout<<amount<<" deposited to "<<acc<<std::endl;
        else
            std::cout<<"Failed deposit of "<<amount<<" to "<<acc<<std::endl;
    }
}

// Withdraw amount from the Checking_Account objects in the vector
void withdraw(std::vector<Checking_Account> &accounts, const double &amount) {
    std::cout<<"\n==========Withdrawal Checking-Accounts======================================="<<std::endl;
    for (auto &acc:accounts) {
        if (acc.withdraw(amount))
            std::cout<<"Withdrew (including fee) "<<amount<<" from "<<acc<<std::endl;
        else
            std::cout<<"Not enough amount for withdrawal !"<<std::endl;
    }
}

// -------------------------------------------------------------------------------------------

// Display objects of Trust Account in the vector
void display(const std::vector<Trust_Account> &accounts) {
    std::cout<<"\n==========Trust Accounts====================================================="<<std::endl;
    for (auto const &acc: accounts)
        std::cout<<acc<<std::endl;
}

// Deposit amount in objects of Trust Account in the vector
void deposit(std::vector<Trust_Account> &accounts, const double &amount) {
    std::cout<<"\n==========Depositing Trust Accounts=========================================="<<std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount))
            std::cout<<amount<<" deposited to "<<acc<<std::endl;
        else
            std::cout<<"Failed to deposite "<<amount<<" to "<<acc<<std::endl;
    }
}

// Withdraw amount from objects of Trust Account in the vector
void withdraw(std::vector<Trust_Account> &accounts, const double &amount) {
    std::cout<<"\n==========Withdrawal Trust Accounts=========================================="<<std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount))
            std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
        else
            std::cout<<"Failed to withdraw "<<amount<<" from "<<acc<<std::endl;
    }
}
