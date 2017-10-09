#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[256]={0},b[256]={0};
    int i,j,x;

    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    for(j=0;a[j]!='\0';j++);
    x=j;
    for(i=0,j=j-1;a[i]!='\0';i++,j--)
    {
        b[i]=a[j];
    }
    printf("%s\n%d\n",b,x);
    return 0;
}
