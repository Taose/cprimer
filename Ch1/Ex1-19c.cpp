/* Exercise 1.11: Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.*/
#include <iostream>

int main()
{
	int integer1{0}, integer2{0};
	std::cout << "Please enter two integers (ctrl+d to exit): " << std::endl;

	while (std::cin >> integer1 >> integer2)
	{
		std::cout << std::endl; //New line :D
		if (integer1 <= integer2)
			while (integer1 <= integer2)
				std::cout << integer1++ << std::endl;
		else //First integer is *bigger*
			std::cerr << "Error: The first value must be smaller than the second value" << std::endl;

		std::cout << "Please enter two more integers: " << std::endl;
	}


	return 0;
}
