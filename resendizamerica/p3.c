#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void invertir(char a[256])
{
    char auxiliar[256]={0};
    int i=0, j=0, longitud=0;
    strcpy(auxiliar,a);
    for(i=0;a[i]!='\0';i++);
    longitud=i;
    for(i=0,j=longitud-1;i<longitud;i++,j--)
    {
        a[i]=auxiliar[j];
    }
}
void mayusculas(char a[256])
{
    int i=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
}
int longitud(char a[256])
{
    int i=0;
    for(i=0;a[i]!='\0';i++);
    return i;

}

int main()
{

    char cadena[256]={0};
    int lon=0;
    gets(cadena);
    mayusculas(cadena);
    invertir(cadena);
    lon=longitud(cadena);

    printf("%s\n",cadena);
    printf("%d\n",lon);
    return 0;
}
