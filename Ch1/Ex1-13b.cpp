/* Exercise 1.13a: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.*/
/* Exercise 1.10: Use the decrement
operator to write a while that prints the numbers from ten down to zero.*/
#include <iostream>

int main()
{
	for (int v1{10}; v1 >= 0; --v1)
		std::cout << v1 << std::endl;

	return 0;
}
