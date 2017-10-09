#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, suma, acum;

    suma=0;
    acum=0;
    while(suma<10000)
    {
        printf("Inserte numero\n");
        scanf("%d", &data);
        acum=acum+data;
        suma=acum*acum;
    }
    printf("El cuadrado de la suma es: %d\n", suma);
    return 0;
}
