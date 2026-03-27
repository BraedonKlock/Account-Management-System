#pragma once

#include "account.h"

class SavingsAccount : public Account
{
private:
public:
	bool withdraw(double amount) override;
	bool deposit(double amount) override;
};

extern SavingsAccount savingsAccount;
