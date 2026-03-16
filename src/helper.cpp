#include "helper.h"
#include "consoleColors.h"

#include <string>
#include <sstream>
#include <iostream>

double validateDouble() 
{
	std::string input;
	double amount = 0.0;
	char extra;

	while (true)
	{
		std::cout << ConsoleColors::ROYAL_PURPLE << "\nEnter the amount to deposit: " << ConsoleColors::RESET;
		std::getline(std::cin, input);
		std::stringstream ss(input);
		if (ss >> amount && !(ss >> extra))
		{
			return amount;
		}
		std::cout << "\nInvalid input.\n";
	}

	return amount;
}
