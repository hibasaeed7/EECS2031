// your information goes here
/***************************************
* 24F - Lab05 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/

#include <stdio.h>
#include <string.h>

int getSum(char **, int n);
int getDiff(char **, int n);

int main(int argc, char *argv[]){

  printf("There are %d arguments (excluding "/"a.out")",argc-1);

  if(!strcmp(argv[2],"sum"))
  {
    for(int i=3;i<argc;i++)
    {
      printf("%s + ", argv[i]);
    }

    printf("= ",getSum(argv,argc));
  }
  else if(!strcmp(argv[2],"diff"))
  {
    for(int i=3;i<argc;i++)
    {
      printf("%s - ", argv[i]);
    }

    printf("= ", getDiff(argv,argc));
  }
  else
  {
    printf("invalid operation \n", );
  }

  return 0;
}

int getSum(char *arg[], int n)
{
  int sum=0;
  for(int i=3;i<n;i++)
  {
    sum+=atoi(arg[i]);
  }
  return sum;

}

int getDiff(char *arg[], int n)
{
  int diff=atoi(argv[3]);
  for(int i=4;i<n;i++)
  {
    diff-=atoi(arg[i]);
  }
  return diff;

}
