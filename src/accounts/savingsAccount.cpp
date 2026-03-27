#include "accounts/savingsAccount.h"

SavingsAccount savingsAccount;

bool SavingsAccount::withdraw(double amount)
{
	if (amount <= 0) return false;

	balance -= amount;

	return true;
}

bool SavingsAccount::deposit(double amount)
{
	if (amount <= 0) return false;

	balance += amount;

	return true;
}
