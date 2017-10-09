#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,suma=0;
    int i,j,y=0;
    while(y<10000)
    {
        scanf("%d",&x);
        suma=suma+x;
        y=suma*suma;
    }
    printf("%d",y);
    return 0;
}
