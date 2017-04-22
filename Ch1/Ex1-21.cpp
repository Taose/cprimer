/* Exercise 1.21: Write a program that reads two Sales_item objects that
have the same ISBN and produces their sum.*/
#include <iostream>
#include "required/Sales_item.h"

int main()
{
	Sales_item transaction1, transaction2;

	std::cin >> transaction1 >> transaction2;

	if (transaction1.isbn() == transaction2.isbn())
	{
		Sales_item total = transaction1 + transaction2;
		std::cout << total << std::endl;
	}
	else
		std::cerr << "Error: Not Equal" << std::endl;

	return 0;
}
