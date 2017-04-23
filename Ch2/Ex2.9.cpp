/* Exercise 2.9
 *
 * Explain the following definitions. For those that are illegal,
 * explain what's wrong and how to correct it.
 *
 * a) std::cin >> int input_value;		//Illegal, the defining a type inside this expression will cause it to go out of scope immediately. Best to declare the variable beforehand.
 *
 * b) int i = {3.14};
 * 		//An int cannot hold precise variables, here the list initializer will prevent it otherwise it would have been truncated.
 *
 * c) double salary = wage = 9999.99; Wage has not been previously declared and doesn't take the type from the left hand side, it could be implicitly an int, which would then truncate the right hand value and copy it all the way to the left. Best to declare it separately.
 *
 * d) int i = 3.14
 * 		//Perfectly fine...except the value will be truncated.
 */
