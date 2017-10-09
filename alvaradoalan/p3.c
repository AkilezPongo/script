#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int j=0;
    int k=0;
    int longitud=0;
    char cad[256]={0};
    char cadena[253]={0};
    gets(cad);

    for(i=0;cad[i]!='\0';i++)
    {
        ;
    }
    longitud=i;

    for(j=0;cad[j]!='\0';j++)
    {
        if(cad[j]>='a'&&cad[j]<='z')
        {
            cad[j]=cad[j]-32;
        }

    }

    i=0;

    for(k=longitud-1;k>=0;k--)
    {
        printf("%c",cad[k]);
    }

    printf("\n%d\n",longitud);
}
