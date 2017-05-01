/* Exercise 2.41: Use your Sales_data class to rewrite the exercises in §1.51, 1.5.2, 1.6.
 For now define the Sales_data class in the same file as the main function
 *
 * Exercise 1.25 (page 53)
 *
 * Exercise 1.25 is quite specific, it is impossible to comply with the idea of the exercise
 * and with Exercise 2.41 as the book store program will not compile with Transaction due to
 * different syntax.... and Sales_data.h is vastly more complex.
 *
 * However...
 *
 * #ifndef TRANSACTION_H
 * #def TRANSACTION_H
 *
 * struct Transaction
 * {
 * 		std::string isbn{""};
 * 		unsigned int qty{0};
 * 		double price{0.0};
 * }
 * #endif
 *
 *
 * May be what the question is asking for.
 *
 * Further
 *
 * #include "ex2-41d-Transaction.h"
 *
 * May be required.
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
