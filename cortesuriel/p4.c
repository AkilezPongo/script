#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int i=0;
    int j=0;
    int x[200]={0};
    int suma=0;
    float promedio=0;
    float sum=0;
    float desv=0;
    srand(time(NULL));

    for(i=0;i<50; i++)
    {
        x[i]=rand()%100;
        suma=suma+x[i];
        printf("%d\n",x[i]);
    }
    promedio=suma/50.0;
    printf("\nEl promedio es:%f\n",promedio);

    for(j=0;j<50;j++)
    {
        sum=sum+((x[j]-promedio)*(x[j]-promedio));
    }
    printf("La sumatoria del numero menos el promedio al cuadrado es: %f\n",sum);

    desv=sqrt(sum/(49));

    printf("La desviacion estandar es:%f\n",desv);



}
