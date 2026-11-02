#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H

#include "BankAccount.h"

class CreditAccount : public BankAccount {
private:
    double monthlyRate;

public:
    CreditAccount(const std::string& number, double money, double rate);
    double calculateIncome() const override;
    std::string getType() const override;
};

#endif
