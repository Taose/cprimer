/*
 * Exercise Section 1.4.1
 */

#include <iostream>

int main()
{
	//Exercise 1.9; Program that uses a while to sum the numbers from 50 to 100
	int value{50}, total{0};
	while (value <= 100)
	{
		total += value;
		++value;
	}

	std::cout << "The sum of numbers from 50 to 100 is: " << total << std::endl;

	//Exercise 1.10; Program that uses a decrement to print numbers from 10 to 0;
	value = 10;

	std::cout << "Exercise 1.10: ";
	while (value >= 0)
	{
		std::cout << value << ", ";
		--value;
	}

	std::cout << std::endl;

	//Exercise 1.11
	value = 0; total = 0; //Resetting.
	std::cout << "Input two values";
	std::cin >> value >> total;

	while (value <= total - 1)
	{

		std::cout << value << ", ";
		++value;
	}

	while (value >= total + 1)
	{
		--value;
		std::cout << value << ", ";
	}


	return 0;
}
