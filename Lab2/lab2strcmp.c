//program for mystrcmp.c
//your info here
/***************************************
* 24F - Lab02 *
* Author: Saeed, Hiba *
* EECS/Prism username: hiba7 *
* Yorku Student #: 219506864 *
* Email: hiba77@my.yorku.ca *
****************************************/

#include<stdio.h>
#include<string.h>

// more header file and declarations as needed

int my_strcmp(char[],char[]);

#define SIZES 36

int main(){
   char a[SIZES];
   char b[SIZES];

   scanf("%s", a);
   scanf("%s",b);

   while((strcmp(a,"xxx") || strcmp(b,"xxx"))){
      int resu = strcmp(a,b);
      if (resu<0)
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (resu>0)
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else
         printf("\"%s\" and \"%s\" have same content\n", a, b);

      int resu2 = my_strcmp(a,b);
      if (resu<0) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (resu>0) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" have same content\n\n", a,b);

      //clear
      //memset(a, '\0', sizeof(a));
      //memset(b, '\0', sizeof(b));

      scanf("%s",a);
      scanf("%s",b);

   }
}

// your version of strcmp implementation here
int my_strcmp(char x[], char y[])
{
  int i= strlen(x);
  int j=strlen(y);

  int min=i<=j?i:j;

  for(int k=0;k<min;k++)
  {
    if(x[k]<y[k])
      return -1;
    else if(x[k]>y[k])
      return 1;
  }

  return i-j;

}
