/*	Exercise 3.1
 * 	Rewrute the exercises from §1.4.1 and §2.6.2 with appropriate `using` declarations
 */

#include <iostream>
	using std::cout;
int main()
{
	int value{50};
	int total{0};

	while (value <= 100)
	{
		total += value;
		++value;
	}

	cout << total;


	return 0;
}
