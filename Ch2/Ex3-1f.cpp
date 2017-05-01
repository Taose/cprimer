/*	Exercise 3.1
 * 	Rewrite the exercises from §1.4.1 and §2.6.2 with appropriate `using` declarations
 *
 * 	Exercise 2.41
 * 	Rewrite the exercises (this is getting a bit meta) from §1.5.1, 1.5.2 and 1.6 for now
 * 	you should define your Sales_data class in the same file as your main function
 *
 *  Exercise 1.23 (page 52)
 * 		(Para) Write a program that reads several transactions and counts
 * 		how many transactions occur for each ISBN
 */

#include <iostream>
	using std::cout;
	using std::endl;
	using std::cin;

#include <string>
	using std::string;

struct Book_t {	//Book Transactions
	string isbn{""};
	int qty{0}; //Amount per transaction
	double price{0.0}; //Cost per book
};

int main()
{
	Book_t t1, t2, t3, t4, t5;
	Book_t *t = &t1;
	cout << "Please input transactions" << endl;

	for (t=&t1; t<=&t5; ++t) //Go to next object.
	{
		cout << "ISBN: ";
		cin >> t->isbn;
		cout << "Quantity: ";
		cin >> t->qty;
		cout << "Price per item: ";
		cin >> t->price;
		cout << endl;
	}

	double total{0.0};
	for (t=&t1; t<=&t5; ++t)
	{
		total += (t->qty * t->price);
	}
	cout << total << endl;

	return 0;
}
