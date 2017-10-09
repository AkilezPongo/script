#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    float data, prom=0, desviacion=0, suma=0, datos[50], sumatoria=0, n=50;
    int i;
    //generacion numeros y promedio
    srand(time(NULL));
    for(i=0;i<n;i++){
        data=rand()%100;
        datos[i]=data;
        suma=suma+data;
    }
    prom=suma/n;
    //sumatoria
    for(i=0;i<n;i++){
        sumatoria=sumatoria+((datos[i]-prom)*(datos[i]-prom));
    }
    //desviacion estandar
    desviacion=sqrt(sumatoria/(n-1));
    //Impresion datos
    for(i=0;i<n;i++){
        printf("%.0f,", datos[i]);
    }
    printf("\ndesviacion=%f", desviacion);
    return 0;
}
