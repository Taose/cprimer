/* Exercise 1.13a: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.*/
#include <iostream>

int main()
{
	int sum{0};

	for( int v1{50}, v2{100}; v1 <= v2; ++v1)
		sum += v1;

	std::cout << sum << std::endl;

	return 0;
}
