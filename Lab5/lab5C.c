// your information goes here
/***************************************
* 24F - Lab05 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/
//declare libarary
#include <stdio.h>
#include <string.h>

//declare function and constant var SIZE
void printParr(char **, int);
void printParr2(char **, int);
void exchangeParr(char **,int);

#define SIZE 11

int main(){

  //initalize inputs
  char * inputs[SIZE] = {"giraffes are high 0", "mosquitos are annoying 1",
  "monkeys are smart 2", "kangaroos are funny 3"};
  //initalize arrays to be def into inputs
  char arr1 [] = "dogs are friendly 4";
  char arr2 [] = "hippos are huge 5";
  char arr3 [] = "cobras are fearsome 6";
  char arr4 [] = "foxes 7";
  char arr5 [] = "elephants 8";
  char arr6 [] = "hens 9";
  char arr7 [] = "bisons 10";

  //arrays fed into inputs
  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  inputs[8] = arr5;
  inputs[9] = arr6;
  inputs[10] = arr7;

  printf("sizeof char*: %d, sizeof pointer array: %d\n\n", sizeof(char*), sizeof inputs );

  // displays the array by calling function printParr()
  printParr(inputs,SIZE);



  // swaps pointees of the first and the second element pointers here
  char * temp=inputs[0];
  inputs[0]=inputs[1];
  inputs[1]=temp;

  // calls sub-function exchangeParr() to swap some other pointees;
  exchangeParr(inputs,SIZE);


  printf("\n== after swapping ==\n");   printf("===========================\n");

  // now displays the exchanged array by calling function printParr()
  printParr(inputs,SIZE);

  // displays the exchanged array again by calling another function printParr2()
  printParr2(inputs,SIZE);




}

/* exchanges some pointees of the pointer array */
void exchangeParr(char *pArr[], int n){

  for(int i=2;i< (n-n%2);i+=2)
  {
    //rather than using library functions can directly refrence each line
    char * tmp= pArr[i];
    pArr[i]=pArr[i+1];
    pArr[i+1]=tmp;
  }
}

/* outputs the first n pointees of the pointer array */
void printParr(char *pArr[], int n){

  // passes the array pArr itself
  for(int i=0;i<n;i++)
  {
    printf("%s \n", pArr[i] ); //prints string at i
  }

  printf("\n");

}

/* outputs the first n pointees of the pointer array -- the 'decayed' argument */
void printParr2(char **pArr, int n){
// passes the address of the pointer array
  for(int i=0;i<n;i++)
  {
    printf("%s \n", *(pArr + i) ); // print string at i thru decayed arg

  }

  printf("\n");

}
