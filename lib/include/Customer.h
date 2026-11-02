#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "BankAccount.h"

#include <memory>
#include <string>
#include <vector>

class Customer {
private:
    std::string customerId;
    std::string fullName;
    std::vector<std::shared_ptr<BankAccount>> accounts;

public:
    Customer(const std::string& id, const std::string& name);
    void addAccount(const std::shared_ptr<BankAccount>& account);
    void showAccounts() const;
    double calculateTotalIncome() const;
};

#endif
