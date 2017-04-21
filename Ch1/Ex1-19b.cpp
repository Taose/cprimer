/* Exercise 1.10: Use the decrement
operator to write a while that prints the numbers from ten down to zero.*/
#include <iostream>

int main()
{
	int v1{10};
	while (v1 >= 0)
	{
		std::cout << v1 << std::endl;
		--v1;
	}

	return 0;
}
