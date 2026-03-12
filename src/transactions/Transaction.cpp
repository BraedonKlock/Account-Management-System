#include "transactions/Transaction.h"

#include <string>
#include <ctime>

Transaction::Transaction(const std::string& transactionId, const std::string& initiatorAccountId, const std::time_t timestamp) 
	: transactionId(transactionId),
	  initiatorAccountId(initiatorAccountId),
	  timestamp(timestamp)
{
}
