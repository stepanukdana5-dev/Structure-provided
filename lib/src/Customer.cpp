#include "Customer.h"

#include <iostream>

Customer::Customer(const std::string& id, const std::string& name)
    : customerId(id), fullName(name) {}

void Customer::addAccount(const std::shared_ptr<BankAccount>& account) {
    if (account) {
        accounts.push_back(account);
    }
}

void Customer::showAccounts() const {
    std::cout << "Customer: " << fullName << " (" << customerId << ")" << std::endl;
    std::cout << "Number of accounts: " << accounts.size() << std::endl;

    for (const auto& account : accounts) {
        account->showInfo();
        std::cout << "  Monthly change: "
                  << account->calculateIncome() << " UAH" << std::endl;
    }
    std::cout << "Customer total: "
              << calculateTotalIncome() << " UAH" << std::endl << std::endl;
}

double Customer::calculateTotalIncome() const {
    double total = 0;
    for (const auto& account : accounts) {
        total += account->calculateIncome();
    }
    return total;
}
