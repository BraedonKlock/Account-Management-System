#pragma once

#include "TransactionStatus.h"

#include <string>
#include <ctime>

class Transaction 
{
protected:
	const std::string transactionId;
	const std::string initiatorAccountId;
	const std::time_t timestamp;
	TransactionStatus status;
public:
	Transaction(const std::string& transactionId, const std::string& initiatorAccountId, const std::time_t timestamp);
	
	virtual bool validate() const = 0;
	
	//GETTERS
	const std::string& getTransactionId() const;
	const std::string& getInitiatorAccountId() const;
	std::time_t getTimeStamp() const;

	virtual std::string getType() const = 0;
	
	// DESTRUCTOR
	virtual ~Transaction() = default;
private:

};
