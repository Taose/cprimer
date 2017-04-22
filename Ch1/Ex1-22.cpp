/* Exercise 1.22: Write a program that reads several transactions for the same
ISBN . Write the sum of all the transactions that were read.*/
#include <iostream>
#include "required/Sales_item.h"

int main()
{
	Sales_item transaction, total;

	while (std::cin >> transaction)
		total += transaction;

	std::cout << "3-99999-X: " << total << std::endl;

	return 0;
}
