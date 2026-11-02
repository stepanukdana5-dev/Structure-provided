#ifndef BANK_H
#define BANK_H

#include "Customer.h"

#include <string>
#include <vector>

class Bank {
private:
    std::string name;
    std::vector<Customer> customers;

public:
    Bank(const std::string& bankName);
    void addCustomer(const Customer& customer);
    void showReport() const;
};

#endif
