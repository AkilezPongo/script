#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int x,i,cadena[50]={0};
    float suma=0,promedio=0,desviacion=0,sumax=0,n;
    srand(time(NULL));

    for(i=0;i<50;i++)
    {
        x=rand()%100;
        cadena[i]=x;
    }
    for(i=0;i<50;i++)
    {
        printf("%d\n",cadena[i]);
    }
    for(i=0;i<50;i++)
    {
        suma=suma+cadena[i];
    }
    promedio=suma/50;
    for(i=0;i<50;i++)
    {
        n=(cadena[i]-promedio)*(cadena[i]-promedio);
        sumax=sumax+n;
    }

    desviacion=sqrt((1/(49))*(sumax));

    printf("\n\nEl promedio es: %.4f\n",promedio);
    printf("La desviacion es: %f",desviacion);
    return 0;
}
