#ifndef DEPOSITACCOUNT_H
#define DEPOSITACCOUNT_H

#include "BankAccount.h"

class DepositAccount : public BankAccount {
private:
    double monthlyRate;

public:
    DepositAccount(const std::string& number, double money, double rate);
    double calculateIncome() const override;
    std::string getType() const override;
};

#endif
