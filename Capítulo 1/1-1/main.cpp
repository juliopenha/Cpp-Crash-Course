/**
 * 1-1. Create a function called absolute_value that returns the absolute value
 * of its single argument. The absolute value of an integer x is the following:
 * x (itself) if x is greater than or equal to 0; otherwise, it is x times −1.
 * You can use the program in Listing 1-9 as a template:
 *
 * ---------------------------------------------------------------------------
 * #include <cstdio>
 * int absolute_value(int x) {
 *   // Your code here
 * }
 *
 * int main() {
 *   int my_num = -10;
 *   printf("The absolute value of %d is %d.\n", my_num,
 *   absolute_value(my_num));
 * }
 * ---------------------------------------------------------------------------
 * Listing 1-9: A template for a program that uses an absolute_value function
 */

#include <cstdio>

int absolute_value(int x) {
  if (x < 0) return x * -1;
  return x;
}

int main() {
  int my_num = -10;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}
