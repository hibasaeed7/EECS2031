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
#include <string.h>

bool isLetter(char);
bool isDigit(char);
bool isLower(char);
char toUpper(char);
void addChar(char*,char);

int main()
{

  char c;
  char result[1000]="";

  c = getchar();
  while(c != EOF)  /* no end-of-file yet */
  {
    if(c=='\n')
    {
    printf("%s\n",result);
    result[0]='\0';
    }
    else if(isDigit(c))
    {
      if(c>'5')
        addChar(result,'+');
      else if(c<'5')
        addChar(result,'-');
      else
        addChar(result,'5');
    }
    else if(isLetter(c))
    {
      if(isLower(c))
      {
        addChar(result, toUpper(c));
      }
      else
      {
        addChar(result,c);
      }
    }
    else
    {
      addChar(result,c);
    }

    c = getchar(); /* read next */
  }
  printf("%s\n",result);


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

bool isLower(char c)
{
  return (c>='a' && c<='z');
}

char toUpper(char c)
{
  return c-32;
}

void addChar(char *s, char c)
{
      int l = strlen(s);
      s[l] = c;
      s[l + 1] = '\0';
}
