/* Exercise 2.40; Recreating the 'Sales_Data' class.*/

#include <string>
#include <iostream>
struct Transaction
{
	std::string isbn{""}; //Should be unique per "book"
	unsigned int qty{0}; //Quantity to be transacted.
	double price{0.0}; //How much is being charged per book.
};

int main()
{
	Transaction first, second;
	Transaction *p = &first;



	}


	return 0;
}


