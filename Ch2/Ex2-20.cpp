/*What does the following program do?
 */

int i = 42;
int *p1 = &i; //Creates a pointer for the address of i that contains the value 42, so *p1 is 42 (the value of p1)
*p1 = *p1 * *p1; //42 * 42, then assigns the result of that to p1, so i is 42 * 42 now.
