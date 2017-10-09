#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

main(void)
{
    int numeros[20];
    int i,N;
    float sumatoria=0,desviacion=0;
    float x=0;
    printf("cuantos datos almacenara?>%d");
    scanf("%d",&N);
    for(i=1;i<N;i++)
    {
        printf("ingrese numeros:");
        scanf("%d",&numeros[i]);
        x=numeros[i]/N;
    }
    for(i=1;i<N;i++)
    {
        sumatoria=((numeros[i]-x)^2)/N;
    }
    desviacion=sqrt(sumatoria);
    printf("desv estandar: %5.f\n\n",desviacion);
    system("pause");
}
