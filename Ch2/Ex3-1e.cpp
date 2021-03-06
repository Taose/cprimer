/*	Exercise 3.1
 * 	Rewrite the exercises from §1.4.1 and §2.6.2 with appropriate `using` declarations
 *
 * 	Exercise 2.41
 * 	Rewrite the exercises (this is getting a bit meta) from §1.5.1, 1.52 and 1.6 for now
 * 	you should define your Sales_data class in the same file as your main function
 *
 *  Exercise 1.21
 * 		(Para) Write a program that reads two Sales_item objects that have the same ISBN
 * 		and produces their sum.
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
	Book_t t1, t2;
	Book_t *t = &t1;
	cout << "Please input transactions" << endl;

	for (t=&t1; t<=&t2; ++t) //Go to next object.
	{
		cout << "ISBN: ";
		cin >> t->isbn;
		cout << "Quantity: ";
		cin >> t->qty;
		cout << "Price per item: ";
		cin >> t->price;
		cout << endl;
	}

	if (t1.isbn == t2.isbn)
		cout << (t1.qty * t1.price) + (t2.qty * t2.price) << endl;

	return 0;
}
