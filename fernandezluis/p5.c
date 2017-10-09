#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int data, datos[10]={0}, n=50;
    int i, j, a;
    //generacion numeros y promedio
    srand(time(NULL));
    for(i=0;i<n;i++){
        data=rand()%100;
        //almacenaje valores segun decenas
        if(data<10 && data>=0){
            datos[0]=datos[0]+1;
        }
        if(data<20 && data>=10){
            datos[1]=datos[1]+1;
        }
        if(data<30 && data>=20){
            datos[2]=datos[2]+1;
        }
        if(data<40 && data>=30){
            datos[3]=datos[3]+1;
        }
        if(data<50 && data>=40){
            datos[4]=datos[4]+1;
        }
        if(data<60 && data>=50){
            datos[5]=datos[5]+1;
        }
        if(data<70 && data>=60){
            datos[6]=datos[6]+1;
        }
        if(data<80 && data>=70){
            datos[7]=datos[7]+1;
        }
        if(data<90 && data>=80){
            datos[8]=datos[8]+1;
        }
        if(data<100 && data>=90){
            datos[9]=datos[9]+1;
        }
    }
    //impresion histograma
    for(i=0;i<10;i++){
        a=datos[i];
        printf("%d0 ", i);
        for(j=0;j<a;j++){
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}
