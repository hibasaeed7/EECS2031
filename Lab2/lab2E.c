/***************************************
* 24F - Lab02 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/

#include <stdio.h>
#define MAX_SIZE 20

int length(char[]);
int indexOf(char[],char);
int occurrence(char[],char);
void displayStr(char[]);
int isQuit(char[]);


main() {

   char word[MAX_SIZE];
   char c;

   char helloArr[]  = "helloWorld";
   printf("\"%s\" contains %d characters, but the size is %zu (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));
   helloArr[5] = '\0'; helloArr[3]='X'; helloArr[7] ='Y';
   printf("\"%s\" contains %d characters, but the size is %zu (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));


   /********** Fill in your code below **********/
   printf("Enter a word and a character separated by blank: ");
   scanf("%s %c", word,&c);

   while(!isQuit(word))
   {
     // don't change these first two lines
     printf("Input word is \"");
     displayStr(word);
     printf("\"\nContains %d characters\n",length(word));
     printf("%c appears %d times in the word\n",c,occurrence(word,c));
     printf("Index of %c is %d\n",c, indexOf(word,c));
     //printf("%c appears %d times in the word",c,occurrence(word,c));

     //enters a new word
     printf("\n");
     printf("Enter a word and a character separated by blank: ");
     scanf("%s %c", word,&c);

   }


   //return 0;
}

//functions to implement
int length(char arr[])
{
  int i=1;

  while(arr[i] != '\0')
  {
    i++;
  }

  return i;

}

int indexOf(char arr[], char c)
{

  int i=0;

  while(arr[i]!= '\0')
  {
    if(arr[i]==c)
      return i;

    i++;
  }

  return -1;

}

int occurrence(char arr[], char c)
{
  int count=0;
  int i=0;
  while(arr[i]!= '\0')
  {
    if(arr[i]==c)
    {
      count++;
    }
    i++;
  }

  return count;

}

void displayStr(char arr[])
{
  int i=0;
  while(arr[i]!= '\0')
  {
    putchar(arr[i]);
    i++;
  }

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
