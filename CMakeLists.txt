cmake_minimum_required(VERSION 3.16)

project(Ledger
    VERSION 1.0
    DESCRIPTION "Account Management System in C++"
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
add_executable(AccountManagementSystem
	src/main.cpp


	# ACCOUNT
	src/Account.cpp
)

# Include headers
target_include_directories(AccountManagementSystem PRIVATE includes)
