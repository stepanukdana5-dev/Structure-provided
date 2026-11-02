#include "CreditAccount.h"

CreditAccount::CreditAccount(const std::string& number, double money, double rate)
    : BankAccount(number, money), monthlyRate(rate) {}

double CreditAccount::calculateIncome() const {
    if (balance < 0) {
        return balance * monthlyRate / 100;
    }
    return 0;
}

std::string CreditAccount::getType() const {
    return "Credit account";
}
