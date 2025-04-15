//program for my_strcat.c
//your information here
/***************************************
* 24F - Lab02 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba77 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/

#include<stdio.h>
//include string library header files
#include <string.h>

//more declarations as needed
void my_strcat(char[],char[]);

#define SIZES 35

int main(){
   char a[SIZES];
   char b[SIZES];
   char c[SIZES];
   char d[SIZES];

   scanf("%s",a);
   scanf("%s",b);

   while((strcmp(a,"xxx") || strcmp(b,"xxx")))
   {

      strcpy(c,a); strcpy(d,b);


      strcat(a,b);
      my_strcat(c,d);

      printf("strcat:   %s\n", a);
      printf("mystrcat: %s\n\n", c);

      //clear all arrays
      //memset(c, '\0', sizeof(c));
      //memset(d, '\0', sizeof(d));


      scanf("%s",a);
      scanf("%s",b);
   }
}

//your version of strcat implementation here
void my_strcat(char des[], char src[]){
  //int count=0;
  int i=strlen(des);
  int j=strlen(src);

  for(int k=0;k<=j;k++)
  {
    des[k+i]=src[k];
    //count++;
  }
}
