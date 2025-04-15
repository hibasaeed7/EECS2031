// your information goes here
/***************************************
* 24F - Lab05 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/
//declare library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//declare functions
int getSum(char **, int n);
int getDiff(char **, int n);

int main(int argc, char *argv[]){

  //print the amount of arg
  printf("There are %d arguments (excluding \"a.out\") \n",argc-1);

  //if there are enough arguments >2 and the first index is sum
  if(argc>2 && strcmp(argv[1],"sum")==0)
  {
    //print first index of integer
    printf("%s", argv[2]);
    for(int i=3;i<argc;i++)
    {
      // keeps printing literal int
      printf(" + %s ", argv[i]);
    }
    // prints the result by sending it to getSum function
    printf("\n = %d \n",getSum(argv,argc));
  }
  //if the arg is > 2 and the first index is diff
  else if(argc>2 && strcmp(argv[1],"diff")==0)
  {
    //print first literal int
    printf("%s", argv[2]);
    for(int i=3;i<argc;i++)
    {
      //print all literal int
      printf(" - %s ", argv[i]);
    }
    //print result by sending to getDiff function
    printf("\n = %d \n", getDiff(argv,argc));
  }
  //error checking and handling unknown cases
  else
  {
    printf("ERROR: Invalid operation. Please use 'sum' or 'diff'.\n");
    return 1;
  }


  return 0;
}

//function that calc the sum and returns to main
int getSum(char *arg[], int n)
{
  //declare sum
  int sum=0;
  //iterate using the 2 index bc first 2 elements are a.out and "sum"
  for(int i=2;i<n;i++)
  {
    //atoi converts literal int to an int and adds to sum
    sum+=atoi(arg[i]);
  }
  //returns result
  return sum;

}

int getDiff(char *arg[], int n)
{
  //declare diff as the first seen int at 2 by using atoi to convert from literal int to int
  int diff=atoi(arg[2]);
  //start indexing from 3
  for(int i=3;i<n;i++)
  {
    //iterates thru all ints and subtracts from element in 2
    diff-=atoi(arg[i]);
  }
  //return final result
  return diff;

}
