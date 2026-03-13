#pragma once

#include <string>

class Account
{
private:
	std::string publickey;
	std::string address;
	double balance;
public:
	Address(const std::string& publickey, const std::string& address, double balance = 0.0);
	const std::string& getPublickey() const;
	const std::string& getAddress() const;
	double getBalance() const;
}
