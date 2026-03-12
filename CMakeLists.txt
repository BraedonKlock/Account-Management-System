cmake_minimum_required(VERSION 3.16)

project(MiniBlockchain
    VERSION 1.0
    DESCRIPTION "Mini blockchain / ledger simulator in C++"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Warnings
if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Executable
add_executable(MiniBlockchain
	src/Main.cpp

	// TRANSACTIONS
	src/transactions/Transaction.cpp
	src/transactions/CreateAccountTransaction.cpp
	src/transactions/DeleteAccountTransaction.cpp
	src/transactions/TransactionStatus.cpp

	// LEDGER
	src/ledger/Ledger.cpp
	src/ledger/LedgerState.cpp
	src/ledger/LedgerSnapshot.cpp

	//ACCOUNT
	src/Account.cpp
)

# Include headers
target_include_directories(MiniBlockchain PRIVATE include)
