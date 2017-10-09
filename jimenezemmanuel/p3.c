#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Hecho por Emmanuel Jiménez Chavero
//Tercer Examen parcial de programación
//Profesor Erik Rivas
int main()
{
    int i,l;
    char a[256]={0},b[256]={0};
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    }
    l=i;
    for(i=0;i<l;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-('a'-'A');
        }
    }
    for(i=l-1;i>=0;i--)
    {
        b[l-i-1]=a[i];
    }
    printf("%s\n%d",b,l);
    return 0;
}
