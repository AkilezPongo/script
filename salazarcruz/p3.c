#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char longcad(char *cad)
{
   int i,c=0,x=0;
   for(i=0;cad[i]!='\0';i++)
   {
       c++;
   }
   return c;
}
int main()
{
    char cad[256];
    int i,x=0;
    scanf("%s",&cad);
    x=longcad(cad);
    for(i=0;cad[i]!='\0';i++)
    {
        if(cad[i]>='a'&&cad[i]<='z')
        {
            cad[i]=cad[i]-32;
        }
    }
    for(i=x-1;i>=0;i--)
    {
        printf("%c",cad[i]);
    }
    printf("\n%d",x);
    return 0;
}
