#include "Bank.h"
#include "Customer.h"
#include "CreditAccount.h"
#include "DebitAccount.h"
#include "DepositAccount.h"

#include <iomanip>
#include <iostream>
#include <memory>

int main() {
    std::cout << std::fixed << std::setprecision(2);

    Bank bank("Training Bank");

    Customer firstCustomer("C001", "Danylo");
    firstCustomer.addAccount(
        std::make_shared<DebitAccount>("1111", 3000, 20));
    firstCustomer.addAccount(
        std::make_shared<DepositAccount>("3333", 10000, 1));

    Customer secondCustomer("C002", "Olena");
    secondCustomer.addAccount(
        std::make_shared<CreditAccount>("2222", -5000, 3));

    bank.addCustomer(firstCustomer);
    bank.addCustomer(secondCustomer);
    bank.showReport();

    return 0;
}
