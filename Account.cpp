#include "iostream"
#include "Account.h"


Account::Account() {
    Withdrawls;
    Deposits;
}

Account::Account(Money initMoney) {
    account(*initMoney)();
}

void Account::account(Money initMoney) {
    std::stringstream p1;
    std::stringstream pStar;
    std::stringstream p2;
    std::stringstream p3;
    std::stringstream p4;
    std::stringstream p5;
    std::stringstream p6;
    std::stringstream p7;
    std::stringstream p8;
    std::stringstream p9;

    p1.str ("Account Details");
    pStar.str ("********************************");
    p2.str ("Current Balance: $");
    p3.str ("Number of Deposits: 3");
    p4.str ("(1) $");
    p5.str ("(2) $");
    p6.str ("(3) $");
    p7.str ("Number of Withdrawals: 2");
    p8.str ("(1) $");
    p9.str ("(2) $");

    std::string s1 = p1.str();
    std::string sStar = pStar.str();
    std::string s2 = p2.str();
    std::string s3 = p3.str();
    std::string s4 = p4.str();
    std::string s5 = p5.str();
    std::string s6 = p6.str();
    std::string s7 = p7.str();
    std::string s8 = p8.str();
    std::string s9 = p9.str();

    std::cout << s1 << std::endl;
    std::cout << sStar << std::endl;
    std::cout << s2 << std::endl;
    std::cout << sStar << std::endl;
    std::cout << s3 << std::endl;
    std::cout << sStar << std::endl;
    std::cout << s4 << std::endl;
    std::cout << s5 << std::endl;
    std::cout << s6 << std::endl;
    std::cout << sStar << std::endl;
    std::cout << s7 << std::endl;
    std::cout << sStar << std::endl;
    std::cout << s8 << std::endl;
    std::cout << s9 << std::endl;

}
void Account::makeDeposit(Account MoneyObject) {
    Money depo;
    int sum_deposits;
    auto sum_deposits = std::accumulate(Deposits.begin(), Deposits.end(), depo);
    initMoney = initMoney + depo;

    std::vector<Money> Deposits;

}

void Account::makeWithdrawals(Account MoneyObj) {
    Money with;
    auto sum_withdrawals = std::accumulate(Withdrawls.begin(), Withdrawls.end(), with);
    initMoney = initMoney - with;
}
