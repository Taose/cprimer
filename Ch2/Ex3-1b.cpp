/*	Exercise 3.1
 * 	Rewrite the exercises from §1.4.1 and §2.6.2 with appropriate `using` declarations
 *
 * 	Exercise 1.10
 */

#include <iostream>
	using std::cout;
	using std::endl;

int main()
{
	int value{10};

	while (value >= 0)
	{
		cout << value << endl;
		--value;
	}

	return 0;
}
