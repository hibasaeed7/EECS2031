/***************************************
* 24F - Lab0 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include <stdio.h>

float sum(float,float);
void greet(int);

int main()
{
   int a = 2011 + 20;
   greet(a);
   int b = 1015 - 3;
   greet(b);
   float x =2.2, y=3.3;
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i + j;
}

/* need to revise this function */
void greet(int i){
  printf("Hello %d!\n",i);
}
