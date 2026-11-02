#include "DebitAccount.h"

DebitAccount::DebitAccount(const std::string& number, double money, double fee)
    : BankAccount(number, money), monthlyFee(fee) {}

double DebitAccount::calculateIncome() const {
    return -monthlyFee;
}

std::string DebitAccount::getType() const {
    return "Debit account";
}
