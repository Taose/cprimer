/* Exercise 1.13a: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.*/
/* Exercise 1.11: Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.*/
#include <iostream>

int main()
{
	int integer1{0}, integer2{0};
	std::cout << "Please enter two integers: " << std::endl;
	std::cin >> integer1 >> integer2;

	for (; integer1 <= integer2; ++integer1)
		std::cout << integer1 << std::endl;

	for (; integer1 > integer2; --integer1)
		std::cout << integer1 << std::endl;



	return 0;
}
