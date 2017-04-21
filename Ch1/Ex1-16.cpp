/*  Exercise 1.16: program that prints the sum of
a set of integers read from cin.*/

#include <iostream>
int main()
{
	int userInput{0};
	int sum{0};

	while (std::cin >> userInput) //Loops until EOF discovered...i.e ctrl+d
		sum += userInput;

	std::cout << "Total: " << sum << std::endl;

	return 0;
}

