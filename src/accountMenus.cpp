#include "accountMenus.h"
#include "accounts/chequingAccount.h"
#include "helper.h"
#include "consoleColors.h"

#include <iostream>
#include <string>
#include <limits>

void displayDeposit()
{
	while (true) 
	{
		double amount = 0.0;
		amount = validateDouble();
		if (!chequingAccount.deposit(amount)) 
		{
			std::cout << "\nFailed to deposit amount into chequing account.\n";
			continue;
		}
		else
		{
			std::cout << "\nAmount deposited successfully\n";
			break;
		}
	}
}

void displayChequingAccount() 
{
	int choice;
	do
	{
		std::cout << "\n" << ConsoleColors:: ROYAL_PURPLE << "======== Chequing Account ========" << ConsoleColors::RESET << "\n"
        	<<  "BALANCE: " << ConsoleColors::ORANGE << " " << chequingAccount.getBalance() << ConsoleColors::RESET << "\n"
		<< ConsoleColors::ORANGE << "1. " << ConsoleColors::ROYAL_PURPLE << "Move money" << ConsoleColors::RESET << "\n"
		<< ConsoleColors::ORANGE << "2. " << ConsoleColors::ROYAL_PURPLE << "Withdraw Money" << ConsoleColors::RESET << "\n"
		<< ConsoleColors::ORANGE << "3. " << ConsoleColors::ROYAL_PURPLE << "Deposit Money" << ConsoleColors::RESET << "\n"
		<< ConsoleColors::ORANGE << "0. " << ConsoleColors::ROYAL_PURPLE << "Return" << ConsoleColors::RESET << "\n"
		<< ConsoleColors::ROYAL_PURPLE << "Enter your choice: " << ConsoleColors::RESET;

		std::cin >> choice;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		switch (choice)
		{
			case 1: break;
			case 2: break;
			case 3: displayDeposit(); break;
			case 0: std::cout << "Returning\n"; break;
			default: std::cout << "Invalid Input"; break;
		}
	} while (choice != 0);
}
