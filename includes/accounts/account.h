#pragma once

#include <string>

class Account
{
protected:
	double balance = 0.0;
	Account() = default;
public:
	Account(const Account&) = delete;
	Account& operator=(const Account&) = delete;
	Account(Account&&) = delete;
	Account& operator=(Account&&) = delete;

	double getBalance() const;
	virtual bool withdraw(double amount) = 0;
	virtual bool deposit(double amount) = 0;
	virtual ~Account() = default;
};
