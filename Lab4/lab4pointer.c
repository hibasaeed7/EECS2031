// your information goes here
/***************************************
* 24F - Lab04 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/

/* Reads in a list of strings from the keyboard, then re-organize them */
 /* and then displays them on the screen. */

 #include <stdio.h>


 int main()
 {
   //declare all variables and pointers
   int age=10;
   int age2=100;
   int *ptr;
   //pointer points to age
   ptr=&age;

   //prints the age
   printf("age: %d %d \n",age,*ptr);
   //ptr value changes to 14 so age should also change to 14
   *ptr=14;

   //print age and ptr to confirm both are 14
   printf("age: %d %d \n",age,*ptr);

   //second pointer initalized to age2
   int *ptr2;
   ptr2=&age2;

   //age change through indirect access
   *ptr2=3*ptr;

   //print age2 to confirm the same as
   printf("age2: %d %d \n",age2,*ptr2);

   //ptr2 now points to ptr
   ptr2=ptr;

   //display age, ptr and pt2 values
   printf("ptr2's current pointee: %d \n",*ptr2);

   printf("age: %d %d %d\n",age,*ptr,*ptr2);

   //subtract 1 by value of ptr2
   (*ptr2)--;

   //display all values and addresses of age, ptr and ptr2
   printf("age: %d %d %d \n",age,*ptr,*ptr2);

   printf("%p %p %p\n",&age,ptr,ptr2);

 }
