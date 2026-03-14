#include <iostream>

void menuDisplay()
{
	const std::string RESET        = "\033[0m";
	const std::string ORANGE       = "\033[38;5;208m";
	const std::string ROYAL_PURPLE = "\033[38;2;190;149;250m";
	
	std::cout << "\n" << ROYAL_PURPLE << "====== Mini Blockchain ======" << RESET << "\n"
	          << ORANGE << "1. " << ROYAL_PURPLE << "Create Account" << RESET << "\n"
	          << ORANGE << "2. " << ROYAL_PURPLE << "Delete Account" << RESET << "\n"
	          << ORANGE << "3. " << ROYAL_PURPLE << "Send Money" << RESET << "\n"
	          << ORANGE << "4. " << ROYAL_PURPLE << "Show Account Balance" << RESET << "\n"
	          << ORANGE << "5. " << ROYAL_PURPLE << "Show Ledger History" << RESET << "\n"
	          << ORANGE << "0. " << ROYAL_PURPLE << "Exit" << RESET << "\n"
	          << ROYAL_PURPLE << "Enter your choice: " << RESET;
}

void Menu()
{
	int choice;
	do
	{
		menuDisplay();
		std::cin >> choice;
		switch(choice)
		{
			case 1: break;
			default: std::cout << "Invalid choice"; break;

		}
	} while (choice != 0);
}

int main() 
{
	Menu();
	return 0;
}
