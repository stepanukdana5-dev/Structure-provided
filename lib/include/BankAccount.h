#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
protected:
    std::string accountNumber;
    double balance;

public:
    BankAccount(const std::string& number, double money);
    void showInfo() const;
    virtual double calculateIncome() const;
    virtual std::string getType() const;
    virtual ~BankAccount() = default;
};

#endif
