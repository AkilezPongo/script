#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N,cuadrado,x,y;
    printf("Introduzca un numero:");
    scanf("%d",&N);
    for(cuadrado=0;cuadrado<=10000;)
    {
        printf("Introduzca otro numero:");
        scanf("%d",&x);
        N=N+x;
        y=N*N;
        cuadrado=cuadrado+y;
    }
    printf("La suma al cuadrado soria: %d", cuadrado);
    return 0;
}
