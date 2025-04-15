/* 24F - Lab0 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/

#include <stdio.h>


int main()
{
  int month,day,year;
	printf("Enter month, day, year seperated by spaces: ",month,day,year);
	scanf("%d %d %d",&month, &day, &year);


	printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d \n",month,day, year,year,month,day,year,month,day);
  return 0;
}
