#include <iostream>
#include <vector>
#include "Saving_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
using namespace std;

int main() {
    // Accounts
    vector<Account> acc;
    acc.push_back(Account {});
    acc.push_back(Account {"Larry"});
    acc.push_back(Account {"Moe", 2000});
    acc.push_back(Account {"Curly", 5000});

    display(acc);
    deposit(acc, 590);
    withdraw(acc, 1900);

    // Saving
    vector<Saving_Account> sav_acc;
    sav_acc.push_back(Saving_Account {});
    sav_acc.push_back(Saving_Account {"Joker", 900});
    sav_acc.push_back(Saving_Account {"Harley", 8911});
    sav_acc.push_back(Saving_Account {"Bruce", 7761, 4.45});

    display(sav_acc);
    deposit(sav_acc, 1000);
    withdraw(sav_acc, 7000);

    // Checking
    vector<Checking_Account> ch_acc;
    ch_acc.push_back(Checking_Account {"Rishi"});
    ch_acc.push_back(Checking_Account {"Sachin", 901});
    ch_acc.push_back(Checking_Account {"Faizal", -99, -8.78});
    ch_acc.push_back(Checking_Account {"Roshan", 880, 10.25});

    display(ch_acc);
    deposit(ch_acc, 250);
    withdraw(ch_acc, 450);

    // Trust
    vector<Trust_Account> tr_acc {};
    tr_acc.push_back(Trust_Account {"Jack"});
    tr_acc.push_back(Trust_Account {"Tyson", 900});
    tr_acc.push_back(Trust_Account {"Kevin", -880, -10.5});
    tr_acc.push_back(Trust_Account {"Oliver", 750, 7.85});

    display(tr_acc);
    deposit(tr_acc, 250);
    deposit(tr_acc, 7500);
    withdraw(tr_acc, 200);  // 1st withdrawal
    withdraw(tr_acc, 200);  // 2nd withdrawal
    withdraw(tr_acc, 200);  // 3rd withdrawal
    withdraw(tr_acc, 200);  // 4th withdrawal
    withdraw(tr_acc, 200);  // 5th withdrawal

    return 0;
}
