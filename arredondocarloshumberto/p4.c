#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    float num[50]={0}, acum=0, prom, desv, aux;
    int i;

    srand(time(NULL));
    for(i=0;i<50;i++)
    {
        num[i]= rand()%100;
        acum=acum+num[i];
        printf("%.1f\n", num[i]);
    }
    prom= acum/50;
    printf("El promedio es: %.1f\n", prom);

    //Desviacion

    getchar();
    acum=0;
    for(i=0;i<50;i++)
    {
        acum= acum+((num[i]-prom)*(num[i]-prom));
    }
    aux=(0.02040816326530612244897959);
    desv=sqrt(acum*aux);
    printf("La desviacion estandar es: %f\n", desv);
    return 0;
}
