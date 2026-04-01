# Account Management System

Account Management System is a C++ project that simulates a simplified financial account platform.

The program allows users to manage different account types, perform transactions such as deposits, withdrawals, and transfers, enforce account-specific rules, and maintain transaction history.

---

## Features

- Create and manage multiple account types:
  - ChequingAccount
  - SavingsAccount
  - InvestmentAccount
- Deposit money into accounts
- Withdraw money from accounts
- Transfer money between accounts
- Maintain transaction history
- Search transactions
- Enforce account-specific rules such as:
  - overdraft handling for chequing accounts
  - interest calculations for savings accounts
- Support validation for account operations
- Preserve account and transaction data through file persistence

---

## Project Purpose

The purpose of this project is to practice core C++ concepts through a banking and financial account system.

Some of the concepts this project is intended to reinforce include:

- classes and objects
- abstraction
- inheritance
- polymorphism
- encapsulation
- templates
- validation
- file handling and persistence
- const correctness
- passing by reference
- clean file organization with header and source files

---

## Technologies

- C++
- CMake

---

# Project directories
```text
.
├── CMakeLists.txt
├── includes
│   ├── accountMenus.h
│   ├── accounts
│   │   ├── account.h
│   │   ├── chequingAccount.h
│   │   ├── investmentAccount.h
│   │   └── savingsAccount.h
│   ├── consoleColors.h
│   ├── helper.h
│   └── transaction
│       ├── transaction.h
│       └── transactionUtils.h
├── README.md
└── src
    ├── accountMenus.cpp
    ├── accounts
    │   ├── account.cpp
    │   ├── chequingAccount.cpp
    │   ├── investmentAccount.cpp
    │   └── savingsAccount.cpp
    ├── consoleColors.cpp
    ├── helper.cpp
    └── main.cpp

