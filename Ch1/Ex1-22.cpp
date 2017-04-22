/* Exercise 1.22: Write a program that reads several transactions for the same
ISBN . Write the sum of all the transactions that were read.*/
#include <iostream>
#include "required/Sales_item.h"

int main()
{
	Sales_item transaction, total; //Holding the current transaction, holding the sum of all.

	while (std::cin >> transaction)
	{
		//If transaction isbn isn't being tracked, track it.
		if (transaction.isbn() != total.isbn())
		{
			//Export whatever we have
			if (total.isbn() != "")
			{
				std::cout << "Total: "<< total << std::endl;
			}
			total = transaction;
		} else
		{ //It is is the same isbn.
			total += transaction;
		}
	}

	//Print out the last one
	std::cout << "TransactionISBN: " << total << std::endl;

	return 0;
}
