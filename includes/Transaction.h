#pragma once

#include <string>
#include <time_t>

class Transaction {
protected:
	const std::string transactionId;
	const std::string initiatorAccountId;
	const std::time_t timeStamp;
public:
	Transaction(const std::string transactionId, const std::string initiatorAccountId, const std::time_t timeStamp);
	
	virtual bool validate() = 0;
	virtual std::string getType() const = 0;

	virtual ~Transaction() = default;
private:

}
