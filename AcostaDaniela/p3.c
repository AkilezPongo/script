#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[256]={0},b[256]={0};
   int x=0,i=0,j=0;

   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
       x++;
   }
   printf("La longitud de la cadena es %d\n",x);

   for(i=x-1,j=0;i>0;i--,j++)
   {
       a[i]=b[j];
   }
   printf("%s",b[j]);
    return 0;
}
