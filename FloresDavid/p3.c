#include <stdio.h>
#include <stdlib.h>

int mayusculas(char a[256])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    return a;
}
int longitud(char a[256])
{
    int i,lon;
    for(i=0;a[i]!='\0';i++);
    return i;
}


int main()
{
    int i,lon;
    char a[256]={0};
    char b[256]={0};

    gets(a);
    lon=longitud(a);
    mayusculas(a);
    for(i=0;i<lon;i++)
    {
        b[lon-i-1]=a[i];
    }
    printf("%s\n",b);
    printf("%d\n",longitud(a));


    return 0;
}
