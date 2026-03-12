#include "Transaction.h"

#include <string>
#include <time_t>

Transaction::Transaction(const std::string transactionId, const std::string initiatorAccountId, const std::time_t timeStamp) 
	: transactionId(transactionId),
	  initiatorAccountId(initiatorAccountId),
	  timeStamp(timeStamp) {
}
