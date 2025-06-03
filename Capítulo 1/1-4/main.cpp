/**
 * 1-4. Write another function called sum that takes two int arguments and returns their sum.
 * How can you modify the template in Listing 1-9 to test your new function?
 */

#include <cstdio>

int absolute_value(int x)
{
  if(x < 0)
    return x * -1;
  return x;
}

int sum(int a, int b)
{
  return a + b;
}

int main()
{
  int my_num = -5;
  int number_a = 10;
  int number_b = 59;

  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  printf("The sum of %d and %d is %d.\n", number_a, number_b, sum(number_a, number_b));
  
  return 0;
}
