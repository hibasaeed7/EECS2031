/* **************************************
* 24F – Lab01 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
*************************************** */

#include <stdio.h>
#include <stdbool.h>


bool isDigit(char);
int charValtoInt(int);

int main()
{
  int counter[11]={0};
  int c;

  c=getchar();

  while(c!=EOF)
  {
    for(int i=0;i<10;i++)
    {
      if(charValtoInt(c)==i)
        counter[i]++;
    }

    if(!isDigit(c))
      counter[10]++;

    c=getchar();

  }
    for(int i=0;i<10;i++)
    {
      printf("%d: %d\n",i,counter[i]);
    }

    printf("X: %d\n",counter[10]);

return 0;
}

bool isDigit(char c)
{
  if(c>='0' && c<='9')
    return 1;
  else
    return 0;
}

int charValtoInt(int c)
{
  return c-48;
}
