//your information here
/***************************************
* 24F  - Lab04 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/

#include <stdio.h>

//declare functions
void swapIncres(int*, int*, int*);
void swap(int **, int **);

int main( ) {
  //initalize variables
  int a, b, c;

  /* Read in three integers */
  scanf("%d %d %d", &a, &b,&c);
  //read in until a is equal to -1
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);
     //call swap and increment function
     swapIncres(&a,&b,&c);
     //display new values
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);

     /* to read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

void swap(int **x, int **y)
{
  //define temp
  int temp;
  //temp hold val of ptr to ptr x
  temp=**x;
  //x is now y
  **x=**y;
  //y is now x using temp
  **y=temp;
}

//swaps, and also increments variables a,b,c
void swapIncres(int *x, int *y, int *z){
   //swap x and z
   swap(&x,&z);
   //increment and multiply values by 100 and 2
   *x += 100;
   *y *= 2;
}
