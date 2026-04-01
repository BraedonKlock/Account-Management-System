#pragma once

#include <string>

enum class TransactionType
{
	Deposit,
	Withdraw,
	Transfer
};

enum class AccountType
{
	Chequing,
	Savings,
	Investment
};

class Transaction
{
private:
	const TransactionType type;
	const double amount;
	const AccountType sourceAccount;
	const AccountType destinationAccount;
	const std::string timestamp;
public:
	Transaction() = delete;
	Transaction(TransactionType type, double amount, AccountType sourceAccount, AccountType destinationAccount, const std::string& timestamp) : type(type), amount(amount), sourceAccount(sourceAccount), destinationAccount(destinationAccount), timestamp(timestamp)
{
}
};
