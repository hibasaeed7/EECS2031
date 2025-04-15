/***************************************
* 24F - Lab03 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/

#include <stdio.h>

int isLeap(int year);
int countDays(int month, int day, int isLeap);


int main()
{
  int year,month,day;

  printf("Enter date ('YYYY MM DD'): ");
  scanf("%d %d %d",&year,&month,&day);


  while(year>0)
  {

    if(isLeap(year))
      printf("%d days of the year %d have elapsed [leap year]\n", countDays(month,day,isLeap(year)),year);
    else
    printf("%d days of the year %d have elapsed \n", countDays(month,day,isLeap(year)),year);


    printf("Enter date ('YYYY MM DD'): ");
    scanf("%d %d %d",&year,&month,&day);
  }


}


int isLeap(int year)
{
  if( (year%4==0 && year%100!=0) || (year%400==0) )
    return 1;
  else
    return 0;

}

int countDays(int month, int day, int isLeap)
{
  int elapsed=0;

  for(int i=1;i<month;i++)
  {
    if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12 )
      elapsed+=31;
    else if(i==4 || i==6 || i==9 || i==11)
      elapsed+=30;
    else if(isLeap)
      elapsed+=29;
    else
      elapsed+=28;
  }

  elapsed+=day;
  return elapsed;
}
