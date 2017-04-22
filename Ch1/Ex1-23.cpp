/* Exercise 1.23 Write a program that reads several transactions and counts
how many transactions occur for each ISBN .*/
#include <iostream>
#include "required/Sales_item.h"

int main()
{
	Sales_item transaction;

	while (std::cin >> transaction)
	{
		int count{1};

		Sales_item newTransaction;
		while (std::cin >> newTransaction)
		{
			if( transaction.isbn() == newTransaction.isbn())
				++count;
			else
			{
				std::cout << transaction.isbn() << " " << count << std::endl;
				transaction = newTransaction;
				count = 1;
			}
		}

		std::cout << transaction.isbn() << " " << count << std::endl;
		count = 1;
	}
	return 0;
}
