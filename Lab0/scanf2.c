/***************************************
* 24F - Lab0 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include <stdio.h>

int sum (int i, int j)
{
  return i+j;
}


int main()
{
  int a, b;
  printf("Please enter two integers separated by a blank <><><>: " );

  scanf( "%d<><><>%d",  &a, &b);     /* assign values to variables a b  */

  printf("Entered %d and %d. Sum is %d\n", a, b, sum(a,b));
}
