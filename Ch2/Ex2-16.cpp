/*Exercise 2.16: Which, if any, of the following assignments are invalid? If
they are valid, explain what they do.
 *
 * 	int i = 0, &r1 = i;
 *  double d = 0, &r2 = d;
 *
 *  a) r2 = 3.14159; // Fine d is now 3.14159
 *  b) r2 = r1; //d is now 0.
 *  c) i = r2; //i is now zero
 *  d) r1 = d; //i is 0. //May cause a slight issue with truncating.
 */
