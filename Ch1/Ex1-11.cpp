/* Exercise 1.11: Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.*/
#include <iostream>

int main()
{
	int integer1{0}, integer2{0};
	std::cout << "Please enter two integers: " << std::endl;
	std::cin >> integer1 >> integer2;

	while (integer1 <= integer2)
		std::cout << integer1++ << std::endl; //We want it to increment *after* it has printed

	while (integer1 >= integer2)
		std::cout << integer1-- << std::endl;

	return 0;
}
