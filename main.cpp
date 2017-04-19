/*
 * Exercise Section 1.3
 *
 */

#include <iostream>

int main()
{
	//Exercise 1.7
	//	// /* Incorrectly

	//	Nested Comments */

	//Exercise 1.8
	std::cout << "/*"; //Legal
	std::cout << "*/"; //Legal
	//std::cout << /* "*/" */; //Not legal
	std::cout << /* "*/" /* "/*" */; //Legal but...
	return 0;
}
