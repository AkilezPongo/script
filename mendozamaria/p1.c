#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int i=0;
    int suma=0;
    int suma_al_cuadrado=0;


       for(i=0;suma_al_cuadrado<10000;i++)
        {
            scanf("%d",&num);
            suma=suma+num;
            suma_al_cuadrado=suma;
            suma_al_cuadrado=suma_al_cuadrado*suma_al_cuadrado;
        }
printf("El cuadrado de la suma es: %d\n",suma_al_cuadrado);
    return 0;
}
