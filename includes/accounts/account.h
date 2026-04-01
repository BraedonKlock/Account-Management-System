#pragma once

#include "transaction/transaction.h"

#include <string>
#include <vector>

class Account
{
private:
	std::vector<Transaction> transactionHistory;
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
