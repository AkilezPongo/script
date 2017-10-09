#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int cuadrado=0, num, suma=0, i;
    for(i=0;i<1;i++){
        //obtencion numeros y operaciones
        printf("introduzca el numero\n");
        scanf("%d", &num);
        suma=suma+num;
        cuadrado=suma*suma;
        printf("cuadrado de la suma=%d\n", cuadrado);
        //verificacion cuadrado
        if(cuadrado<=10000){
            i--;
            cuadrado=0;
        }
    }
    return 0;
}
