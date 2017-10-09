#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int suma=0, x, vf;
    while(pow(suma,2)<10000){
        printf("Ingresa un numero: \n");
        scanf("%d",&x);
        suma=suma+x;
    }
    vf=pow(suma,2);
    printf("El cuadrado de la suma es: %d",vf);
    return 0;
}
