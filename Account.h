#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include "Money.cpp"
#include "main.cpp"
#include "vector"
#include "string"
#include "sstream"


class Account {
private:

public:
    bool make_depo;
    bool make_with;
    int sum_deposits;
    int sum_withdrawals;
    std::vector<Money> Withdrawls;
    std::vector<Money> Deposits;



    Account();
    Account(Money initMoney);
    ~Account();

    void account(Money initMoney(););
    void makeDeposit(Account MoneyObject);
    void makeWithdrawals(Account MoneyObj);

};
#endif //ACCOUNT_H