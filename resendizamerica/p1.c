#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int suma=0;
    int cuadrado=0;
    int i=0;
    for(i=0;cuadrado<10000;i++)
    {
        scanf("%d",&x);
        suma=suma+x;
        cuadrado=suma*suma;
    }
    printf("El cuadrado de la suma es: %d", cuadrado);
    return 0;
}
