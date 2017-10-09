#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[256]={0}, cadinv[256]={0};
    int len=0, i, j;

    printf("Inserte cadena, por favor <3\n");
    gets(cadena);

    for(i=0;cadena[i]!='\0';i++)
    {
        len++;
    }

    for(i=0;i<=len;i++)
    {
        if(cadena[i]>='a' && cadena[i]<='z')
        {
            cadena[i]=cadena[i]-32;
        }
    }
    j=len-1;
    for(i=0;i<=len;i++)
    {
        cadinv[j]=cadena[i];
        j--;
    }
    printf("%s\n", cadinv);
    printf("Longitud: %d", len);
    return 0;
}
