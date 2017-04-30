/* Exercise 2.41: Use your Sales_data class to rewrite the exercises in §1.51, 1.5.2, 1.6.
 For now define the Sales_data class in the same file as the main function
 *
 * Exercise 1.20
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
	Transaction first, second, third;
	Transaction *pTransaction = &first;
	int order{0};

	for(order = 0, pTransaction; pTransaction <= &third; ++pTransaction, ++order)
	{
		std::cout << "Transaction #" << order << "\tISBN: ";
		std::cin >> pTransaction->isbn;

		std::cout << "\t Quantity: ";
		std::cin >> pTransaction->qty;

		std::cout << "\t Cost of book: ";
		std::cin >> pTransaction->price;

		std::cout << std::endl;
	}

	pTransaction = &first; //Reset

	for(order = 0, pTransaction; pTransaction <= &third; ++pTransaction, ++order)
		std::cout << "Transaction #" << order << ": "
				  << pTransaction->isbn << " "
				  << pTransaction->qty << " "
				  << pTransaction->price << std::endl;
	return 0;
}
