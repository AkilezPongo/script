#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int x[50],i=0;
    float promedio=0,suma=0,sumatoria=0,desviacion=0,y=.02040816327;
    srand(time(NULL));
    for(i=0;i<50;i++)
    {
       x[i]=rand()%99;
       printf("%d\n",x[i]);
    }

    for(i=0;i<50;i++)
    {
        suma+=x[i];
    }

    //printf("suma %.2f\n",suma);
    promedio=suma/50;
    printf("promedio %.2f\n",promedio);

    for(i=0;i<50;i++)
    {
        sumatoria+=(x[i]-promedio)*(x[i]-promedio);
    }

    //printf("sumatoria %.2f\n",sumatoria);

    desviacion=sqrtf(y*sumatoria);//no pude multiplicarlo por la fraccion 1/N-1, y es la fraccion en numero decimal

    printf("Desviacion estandar %f",desviacion);

    return 0;
}
