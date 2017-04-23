/*Exercise 2.18: Write code to change the value of a pointer. Write code to
change the value to which the pointer points.
 */

#include <iostream>
int main()
{
	int i = 1, *pi = &i;

	std::cout << *pi << std::endl;

	*pi = 2; //Change the value of pi

	std::cout << *pi << std::endl;
}
