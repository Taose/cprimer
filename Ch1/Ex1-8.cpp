#include <iostream>

int main()
{
	std::cout << "/*"; //Legal
	std::cout << "*/"; //Legal
	std::cout << /* "*/" */; //Illegal
	std::cout << /* "*/" /* "/*" */; //Legal but doesn't behave as expected.

	return 0;
}
