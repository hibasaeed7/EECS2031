// your information goes here
/***************************************
* 24F - Lab04 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include <stdio.h>
#include <stdlib.h>

//define structure
struct ints
{
   int data1;
   int data2;
};

//declare functions
void processStruc (struct ints);
struct ints getSumDiff(int a, int b);
void printStruc (struct ints x);


int main()
{
  struct ints a = {100,4};
  printf("struct a before process: %d %d\n", a.data1, a.data2);
  processStruc(a);  // pass by value
  // display a's members again, no change
  printf("struct a after  process: %d %d\n\n", a.data1, a.data2);

  // functions that return a struct, thus encapsulating multiple values
  /**********************************  */
  int num1, num2;
  printf("Enter two integers: ");
  scanf("%d %d",&num1,&num2);

  while(1){
   // call getSumDiff() to calcaulte
   struct ints result=getSumDiff(num1,num2);
   // call printStruc () to output sum and diff;
   printStruc(result);
   // prompt and read again
   printf("Enter two integers: ");
   scanf("%d %d",&num1,&num2);

 }

 /********************************** */

}

/* call/pass by value  */
void processStruc(struct ints x){
  //increases data 1 by 1 and data 2 by 100
  x.data1 ++;
  x.data2 +=100;
}

struct ints getSumDiff(int a, int b){
    //defines struct of ints x
    struct ints x;
    //data 1 of x is the sum of a and b
    x.data1=a+b;
    //data 2 of x is the diff of a and b
    x.data2=a-b;
    //structure x is returned
    return x;

}

void printStruc (struct ints x){
  //displays value of data 1 and data 2 of struct x
  printf("sum is: %d, diff is: %d \n",x.data1,x.data2);
}
