#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[256]={0};
    char y[256]={0};
    int i=0, j=0, lon=0;
    gets(x);
    while(x[i]!=0)
    {
    i++;
    lon++;
    }
    for(i=0;i<lon;i++)
    {
        if(x[i]>='a'&&x[i]<='z')
        {
        x[i]=x[i]-('a'-'A');
        }
    }
    for (i=lon-1;i>=0;i--)
    {
        j++;
        y[j]=x[i];
        printf("%c",y[j]);

    }
    printf("\n");
    printf("%d",lon);
    return 0;
}
