/*Exercise 2.24: Why is the initialization of p legal but that of lp illegal?
 *
 * int i = 42; void *p = &i; long *lp = &i;
 *
 * void is typeless and so can contain various types, including ints.
 *
 * long is not typeless and can only contain long objects, of which i is not.
 */




