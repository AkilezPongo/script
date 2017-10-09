#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main()
{
    char a[50]={0};
    int i=0;
    float suma=0;
    float promedio=0;
    float des=0;

    srand (time(NULL));

    for(i=0; i<50 ; i++)
    {
        a[i]=rand()%100;
        printf("%d\n", a[i]);
        suma=suma+a[i];

    }

    promedio =suma/50;

    for(i=0; i<50; i++)
    {
        des=sqrt((1.0/49.0)*((a[i]-promedio)*(a[i]-promedio)));
    }


    printf("El promedio es:%f y la desviacion es: %f",promedio, des);


    return 0;
}
