/* **************************************
* 24F – Lab01 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
*************************************** */


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

bool isEven(int);
bool isPrime(int);

int main()
{
  int arr[SIZE]={0};
  int even[SIZE]={0};
  int prime[SIZE]={0};

  int upper_bound = 40;
  int lower_bound = 0;

  srand(time(NULL));

  for(int i=0;i<SIZE;i++)
  {
    arr[i]= rand() % (upper_bound - lower_bound + 1) + lower_bound;
  }

  int index1=0;
  int index2=0;

  for(int i=0;i<SIZE;i++)
  {
    if(isPrime(arr[i]))
    {
      prime[index1]=arr[i];
      index1++;
    }

    if(isEven(arr[i]))
    {
      even[index2]=arr[i];
      index2++;
    }
  }

  printf("array [ ");
  for (int i = 0; i < SIZE; i++) {
      printf("%d ", arr[i]);
  }

  printf("] \n%d even numbers: ", index2);
  for (int i = 0; i < SIZE; i++) {

    if(arr[i]==0)
    {
      printf("0 ");
    }
    if(even[i]!=0)
    {
      printf("%d ", even[i]);
    }


  }

  printf("\n%d prime numbers: ",index1);
  for (int i = 0; i < SIZE; i++) {
    if(prime[i]!=0)
    {
      printf("%d ", prime[i]);
    }
  }
  printf("\n");

  return 0;
}

bool isEven(int num)
{
  return num%2==0;
}

bool isPrime(int num)
{
  if(num==0 || num==1)
    return 0;
  else
  {
    for(int i=2;i<num;i++)
    {
      if(num%i==0)
      {
        return 0;
        break;
      }
    }
  }
  return 1;
}
