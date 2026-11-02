#include "Bank.h"

#include <iostream>

Bank::Bank(const std::string& bankName) : name(bankName) {}

void Bank::addCustomer(const Customer& customer) {
    customers.push_back(customer);
}

void Bank::showReport() const {
    std::cout << "Bank: " << name << std::endl;
    std::cout << "Number of customers: " << customers.size() << std::endl << std::endl;

    double total = 0;
    for (const Customer& customer : customers) {
        customer.showAccounts();
        total += customer.calculateTotalIncome();
    }
    std::cout << "Total monthly change for all customers: "
              << total << " UAH" << std::endl;
}
