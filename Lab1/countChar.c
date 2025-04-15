/***************************************
* 24F - Lab01 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include <stdio.h> // define EOF

int main(){
  int c;
  int count = 0;
 
  c = getchar();
  while(c != EOF)  /* no end-of-file yet */
  { 
    count++;  // spaces and '\n' also counted

    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);

}

