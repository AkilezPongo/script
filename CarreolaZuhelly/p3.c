#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000],d[1000];
    int h,b,c,l,i,j,k,m;
    gets(a);
     for(i=0;a[i]!='\0';i++)
    {
        l=i+1;
    }
    m=l-1;
    for(j=0;j<l;j++)
    {
        if(a[j]!=' ')
            a[j]=a[j]-32;
    }
    puts(a);
    for(j=0;j<=m;j++)
    {
        d[j]=a[m-j];
    }
    d[l]='\0';
    puts(d);
    printf("%d",l);
    return 0;
}
