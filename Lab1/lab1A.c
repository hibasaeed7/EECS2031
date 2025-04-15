/* **************************************
* 24F – Lab01 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
*************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
bool isDigit(char);
bool isLetter(char);
bool isOperator(char);


int main()
{
  int integer=0;
  char character=' ';

  printf("Enter an integer and a character seperated by a blank:");
  scanf("%d %c", &integer, &character);

  while(integer != -10000)
  {
      if(isDigit(character)==1)
      {
        int result=integer+ (character - '0');
        printf("Character '%c' represents a digit. The sum of %d and %c is %d. \n",character,integer, character,result);
      }
      else if(isLetter(character)==1)
      {
        printf("Character '%c' represents a letter \n",character);
      }
      else if(isOperator(character)==1)
      {
        printf("Character '%c' represents an operator \n",character);
      }
      else
      {
        printf("Character '%c' represents others \n",character);
      }

       while (getchar() != '\n');

      printf("Enter an integer and a character seperated by a blank: ");
      scanf("%d %c", &integer, &character);

    }


  return 0;
}

bool isDigit(char c)
{
  if(c>='0' && c<='9')
    return 1;
  else
    return 0;
}

bool isLetter(char c)
{
  if( ('A'<=c && c<='Z') || ('a'<=c && c<='z') )
    return 1;
  else
    return 0;
}

bool isOperator(char c)
{
  if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%')
    return 1;
  else
    return 0;
}
