#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int b1=0, b2=1, c, lim=10, i;

    //impresion digito inicial
    printf("%d,", b2);
    for(i=0;i<lim-1;i++){
        //generacion digito siguiente
        c=b1+b2;
        //impresion numero siguiente
        printf("%d", c);
        if(i<=(lim-3)){
            printf(",");
        }else{
            printf(".");
        }
        //inicializacion numeros previos
        b1=b2;
        b2=c;
    }
    return 0;
}
