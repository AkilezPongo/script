#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,x,suma=0,cuadrado=0;

    for(i=0;cuadrado<=10000;i++)
    {
        scanf("%d",&x);
        suma=suma+x;
        cuadrado=suma*suma;
    }

    printf("EL cuadrado de la suma es: %d",cuadrado);
    return 0;
}
