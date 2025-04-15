/***************************************
* 24F - Lab02 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/
#include <stdio.h>
#include <stdlib.h>  // for atoi

#define SIZE 14

int isQuit(char[]);
int length(char[]);
int power(int,int);
int my_atoi(char[],int);

int main(){
  int a,b;
  int base;
  char arr [SIZE];

  printf("Enter a word of positive number and base, or 'quit': " );
  scanf("%s %d", arr, &base);

  while(!isQuit(arr))
  {
    printf("%s\n", arr);

  //  a = atoi(arr);
  //  printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr,base);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b,b,b, b*2, b*b);

    printf("Enter a word of positive number and base, or 'quit': " );
    scanf("%s %d", arr, &base);
  }

  return 0;

}

/* converts an array of (digit) characters into a decimal value*/

/* Recommended book K&R scans from left to right.
 Here you should scan from RIGHT to LEFT. This is a little more complicated
 but more straightforward approach (IMHO) */

int my_atoi (char c[], int base)
{
  int i=0;
  int size=length(c);
  int result=0;

  while(size>0)
  {
    result+=(c[size-1]-'0')*power(base,i);
    size--;
    i++;

  }

  return result;
}

int power(int base, int n)
{
  int result=1;
  for(int i=0;i<n;i++)
  {
    result*=base;
  }

  return result;
}

int isQuit (char arr[])
{
 int i=0;
 while(arr[i]!='q')
 {
   i++;
 }
   if (arr[i]=='q' && arr[i+1]=='u' && arr[i+2]=='i' && arr[i+3]=='t')
      return 1;
   else
      return 0;
}

int length(char arr[])
{
  int i=1;

  while(arr[i] != '\0')
  {
    i++;
  }

  return i;

}
