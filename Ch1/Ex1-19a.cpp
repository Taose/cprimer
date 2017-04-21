/* Exercise 1.9: Write a program that uses a while to sum the numbers from
50 to 100.*/
#include <iostream>

int main()
{
	int v1{50}, v2{100}, sum{0};
	while (v1 <= v2)
	{
		sum += v1;
		++v1;
	}

	std::cout << sum << std::endl;

	return 0;
}
