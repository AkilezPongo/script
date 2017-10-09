#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma=0;
    int i=0;
    int x=0;

    int num[1000]={0};


    for(i=0;suma*suma<10000;i++)
    {

        scanf("%d",&num[i]);

        suma=suma+num[i];

    }

    x=suma*suma;
    printf("El cuadrado de la suma es:%d\n",x);
}
