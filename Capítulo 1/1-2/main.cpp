/**
 * 1-2. Try running your program with different values. Did you see the values you expect?
 */

#include <cstdio>

int absolute_value(int x)
{
  if(x < 0)
    return x * -1;
  return x;
}

int main()
{
  int my_num = -5;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = -4;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = -3;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = -2;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = -1;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = -0;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = 1;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = 2;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = 3;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = 4;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  my_num = 5;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  
  return 0;
}
