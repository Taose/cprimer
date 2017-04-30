/* Exercise 2.41: Use your Sales_data class to rewrite the exercises in §1.51, 1.5.2, 1.6.
 For now define the Sales_data class in the same file as the main function
 *
 * Exercise 1.22 (page 50)
 */

#include <iostream> //cin, cout, endl
#include <string>
struct Transaction
{
	std::string isbn{""};
	unsigned int qty{0};
	double price{0.0};
};

int main()
{
	Transaction t1, t2, t3, t4, t5;
	Transaction *t = &t1;

	for (t = %t1; t<=&t5; ++t)
	{
		std::cout << "Input new transaction..." << std::endl;
		std::cout << "\tISBN: ";
		std::cin >> t->isbn;
		std::cout << "\tQuantity: ";
		std::cin >> t->qty;
		std::cout << "\tCost per item: ";
		std::cin >> t->price;
	}

	double total{0.0};
	for (t = &t1; t<=&t5; ++t)
	{
		total += t->price * t->qty;
	}

	std::cout << "Total Cost: " << total << std::endl;

	return 0;
}
