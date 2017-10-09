#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int arr[50];
    int x=0,i,suma=0;
    float mean=0,stdev=0,sumatoria=0;
    int hora=time(NULL);
    srand(hora);
    for(i=0;i<50;i++)
    {
        arr[i]=rand()%100;
        suma=suma+arr[i];
        printf("%d\n",arr[i]);
    }
    mean=suma/50.0;
    printf("El promedio es: %f\n",mean);
    for(i=0;i<50;i++)
    {
        sumatoria=sumatoria+pow((arr[i]-mean),2);
    }
    stdev=sqrt((sumatoria)/49.0);
    printf("La desviacion estandar es: %f\n",stdev);


    return 0;
}
