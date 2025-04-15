//your information here
/***************************************
* 24F  - Lab04 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/

#include <stdio.h>

void swapIncres(int*, int*, int*);
void swap(int **, int **);

int main( ) {
  int a, b, c;

  /* Read in three integers */
  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);
     swapIncres(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);

     /* to read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

void swap(int **x, int **y)
{
  int temp;
  temp=**x;
  **x=**y;
  **y=temp;
}

//swaps, and also increments variables a,b,c
void swapIncres(int *x, int *y, int *z){

   swap(&x,&z);

   *x += 100;
   *y *= 2;
}
