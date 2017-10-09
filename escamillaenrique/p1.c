#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, h=0, cuadrado=0;
    while (cuadrado<10000)
    {
        scanf("%d",&i);
        h=h+i;
        cuadrado=((h)*(h));
    }
    printf("%d\n", cuadrado);
    return 0;

}
