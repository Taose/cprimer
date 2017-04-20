/*Demonstration of illegal code*/

#include <iostream>

int main()
{
	std::cout << "The sum of " << v1; //The stray semicolon terminates the expression early and the others are not run.
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
	return 0;
}
