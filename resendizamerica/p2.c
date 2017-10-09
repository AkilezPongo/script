#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=1, z=1;
    int i=0;
    int serie[10];
    serie[0]=1;
    for(i=1;i<10;i++)
    {
        serie[i]=x+y;
        x=y;
        y=serie[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",serie[i]);
    }
    return 0;
}
