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
void swap(int *, int *);

int main( ) {
  //initalized variables
  int a, b, c;

  /* Read in three integers */
  scanf("%d %d %d", &a, &b,&c);

  //while a is not equal to -1
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);
     //swap the var using pointers
     swapIncres(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);

     /* to read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

void swap(int *x, int *y)
{
  //define a temp
  int temp;
  //set temp to ptr x
  temp=*x;
  //swap y to x
  *x=*y;
  //y is x's val stored in temp
  *y=temp;

  // no need to return bc of pointers
}

//swaps, and also increments variables a,b,c
void swapIncres(int *x, int *y, int *z){
  //call the swap function for x and z
   swap(x,z);

   //use pointers of x and y to increment by 100 and multiply by 2
   *x += 100;
   *y *= 2;
}
