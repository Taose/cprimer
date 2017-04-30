/*Exercise 2.26: Which of the following are legal? For those that are illegal,
explain why.
 *
 *  a) const int buf; //Needs to be defined, this is just a declaration.
 *
 *  b) int cnt = 0; //Perfectly legal;
 *
 *  c) const int sz = cnt; //cnt will be read into sz once, it will then be fixed, but cnt can be changed.
 *
 *  d) ++cnt; ++sz; //Incrementing cnt will work but sz will not because it was a const.
 */




