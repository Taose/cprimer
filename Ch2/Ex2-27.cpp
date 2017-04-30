/*Exercise 2.27: Which of the following initializations are legal? Explain why.
 *
 *  a) int i = -1, &r = 0; While i is legal, &r is not as it must refer to an object such as a variable.
 *  b) int *const p2 = &i2; // Legal, it'll always refer to the address of i2 however.
 *  c) const int i = -1, &r = 0; Against, const int would be fine, but const int &r would not.
 *  d) const int *const p3 = &i2; Seems like this would cause issues. But fine.
 *  e) const int *p1 = &i2;, fine.
 *  f) const int &const r2; //not fine. No definition.
 *  g) const int i2 = i &r = i; Fine, i2 would always refer to -1 regardless of i changing and &r would always refer to the variable i.

Exercise 2.28
* a) int i, *const cp; //The latter is not legal, const needs to be defined.
* b) int *p1, *const p2; //The latter needs to be defined.
* c) const int ic, &r = ic; //ic needs to be defined.
* d) const int *const p3; p3 needs to be defined....
*
*


 */




