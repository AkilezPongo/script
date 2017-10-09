#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int numeros[50]={0}, i=0;
    float promedio, suma=0, sumatoria=0, desviacion, valor;
    srand(time(NULL));
    for(i=0;i<50;i++)
    {
        numeros[i]=rand()%100;
    }
    for(i=0;i<50;i++)
    {
        suma=suma+numeros[i];
    }
    promedio=suma/50;
    for(i=0;i<50;i++)
    {
        sumatoria=sumatoria+((numeros[i]-promedio)*(numeros[i]-promedio));
    }
    valor=(0.02040816327)*(sumatoria);
    desviacion=sqrt(valor);
    printf("El promedio es %f\n", promedio);
    printf("La desviacion estandar es %f\n", desviacion);
    return 0;
}
