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

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
//defing max variables
 #define MAX_LINES 34
 #define MAX_COLS  54

// declaring functions
void exchange2D(char[][MAX_COLS],int);
void print2D(char[][MAX_COLS],int);

 int main()
 {
   //declaration of 2D input
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", sizeof inputs);

     /* Read in the lines from the stdin (keyboard) now, using function fgets() */

     int i=0;
     while(1){
       //prints and recieves string into inputs[i]
       printf("Enter string: ");
       fgets(inputs[i], MAX_COLS, stdin);

       inputs[i][strcspn(inputs[i], "\n")] = '\0';

        //if any of the strings are xxx at any point break the loop
       if(strcmp(inputs[i],"xxx")==0)
       {
         break;
       }


       i++;
     }
     printf("\n");

     // displays the array by calling sub-function print2D(...)
     print2D(inputs, i);

     // swaps the first and second row here
     char temp[MAX_COLS];
     strcpy(temp, inputs[0]);
     strcpy(inputs[0], inputs[1]);
     strcpy(inputs[1], temp);

     // calls sub-function exchange2D() to swap some other rows
     exchange2D(inputs,i);

     printf("\n== after swapping ==\n");

     // displays the (exchanged array) by calling sub-function print2D()
     print2D(inputs, i);


     return 0;
 }


 // Exchange of rows. need to involve data movement
 void exchange2D(char p[][MAX_COLS], int n)
 {
   //depending on if even or off will either iterate through all i<n
   // or n-1 if odd
     for(int i=2;i<(n-n%2);i+=2)
     {
       //declares a temp string that will assist in swapping
       char temp[MAX_COLS];
       strcpy(temp,p[i]);
       strcpy(p[i],p[i+1]);
       strcpy(p[i+1],temp);

     }


 }

 // output the 2D array, row by row
 void print2D(char p[][MAX_COLS], int n)
 {

   //while i< size prints the entire row of strings
   for( int i=0; i<n;i++)
   {
      printf("[%d] %s \n",i,p[i]);
   }

 }
