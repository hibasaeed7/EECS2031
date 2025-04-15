/* **************************************
* 24F – Lab01 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
*************************************** */

#include <stdio.h>

int main()
{

  int c;
  int count = 0;
  int blankSpace=0;
  int nextLine=0;

  c = getchar();
  while(c != EOF)  /* no end-of-file yet */
  {

    if(c==' ')
      blankSpace++;
    else if(c=='\n')
      nextLine++;
    else
      count++;  // spaces and '\n' also counted

    c = getchar(); /* read next */
  }

  printf("# of chars: %d (# of blanks: %d)\n",count+blankSpace,blankSpace);
  printf("# of lines: %d\n", nextLine);


  return 0;
}
