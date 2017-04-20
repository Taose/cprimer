/* Exercise 1.11: What does the following for loop do? What is the final value
of sum?*/
#include <iostream>

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i) //Sums up the values of -100 to +100.
		sum += i;

	return 0;
}
