#include "BankAccount.h"

#include <iostream>

BankAccount::BankAccount(const std::string& number, double money)
    : accountNumber(number), balance(money) {}

void BankAccount::showInfo() const {
    std::cout << "  " << getType() << " " << accountNumber
              << ", balance: " << balance << " UAH" << std::endl;
}

double BankAccount::calculateIncome() const {
    return 0;
}

std::string BankAccount::getType() const {
    return "Bank account";
}
