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

   int n;
   printf("Enter the number of interactions: ");
   scanf("%d",&n);

   for(int p=0;p<n;p++)
   {
     float x,y;
     printf("Enter two float numbers separated by ##:");
     scanf("%f##%f",&x,&y);
     float su= sum(x,y);
     printf( "%0.3f + %0.3f = %f (%0.2f) \n", x,y, su, su);

   }


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
