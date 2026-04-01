#pragma once

#include "transaction/transaction.h"

#include <vector>

template<typename Predicate>
std::vector<Transation> findTransactions(const std::vector<Transaction>& transactionHistory, Predicate predicate)
{
	std::vector<Transaction> result;

	for (const auto& transaction : transactionHistory)
	{
		if (predicate(transaction))
		{
			result.push_back(transaction);
		}
	}
	return result;
}
