#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x=0;
    int s=0;
    int cuadrado=0;
    int i=0;

    printf("Introduce numeros enteros\n");

    for(i=0;cuadrado<10000;i++)
    {
        scanf("%d",&x);
        s+=x;
        cuadrado=s*s;

    }

    if(cuadrado>10000)
    {
        printf("%d",cuadrado);
    }

    return 0;
}
