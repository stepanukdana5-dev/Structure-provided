#include "DepositAccount.h"

DepositAccount::DepositAccount(const std::string& number, double money, double rate)
    : BankAccount(number, money), monthlyRate(rate) {}

double DepositAccount::calculateIncome() const {
    return balance * monthlyRate / 100;
}

std::string DepositAccount::getType() const {
    return "Deposit account";
}
