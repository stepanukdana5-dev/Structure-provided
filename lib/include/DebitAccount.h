#ifndef DEBITACCOUNT_H
#define DEBITACCOUNT_H

#include "BankAccount.h"

class DebitAccount : public BankAccount {
private:
    double monthlyFee;

public:
    DebitAccount(const std::string& number, double money, double fee);
    double calculateIncome() const override;
    std::string getType() const override;
};

#endif
