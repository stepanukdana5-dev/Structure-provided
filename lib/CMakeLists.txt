add_library(BankLibrary 
    src/BankAccount.cpp
    src/DebitAccount.cpp
    src/CreditAccount.cpp
    src/DepositAccount.cpp
    src/Customer.cpp
    src/Bank.cpp
    include/BankAccount.h
    include/DebitAccount.h
    include/CreditAccount.h
    include/DepositAccount.h
    include/Customer.h
    include/Bank.h
)

target_include_directories(BankLibrary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
