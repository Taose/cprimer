/*	Exercise 3.1
 * 	Rewrite the exercises from §1.4.1 and §2.6.2 with appropriate `using` declarations
 *
 * 	Exercise 1.11
 */

#include <iostream>
	using std::cout;
	using std::endl;
	using std::cin;

int main()
{
	int v1{0}, v2{0}; //Values

	cout << "Please enter two values:" << endl;
	cin >> v1 >> v2;

	if (v1 > v2)
	{
		while (v1 >= v2)
		{
			cout << v2 << endl;
			++v2;
		}
	} else {
		while (v1 <= v2)
		{
			cout << v1 << endl;
			++v1;
		}
	}

	return 0;
}
