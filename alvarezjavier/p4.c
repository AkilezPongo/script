#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int a[50]={0};
    int i,x=0,y=0;
    float xm,de;

    srand(time(NULL));

    for(i=0;i<50;i++)
    {
        a[i]=rand()%100;
        x=x+a[i];
        printf("%d\n",a[i]);
    }
    xm=x/50.00;
    for(i=0;i<50;i++)
    {
        y=y+((a[i]-xm)*(a[i]-xm));
    }
    de=sqrt((y/(49.00)));

    printf("El promedio es: %.2f y la desviacion estandar es: %.2f\n",xm,de);
    return 0;
}
