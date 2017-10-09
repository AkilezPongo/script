#include <stdio.h>
#include <stdlib.h>

int main(){
    char cadena[256]={0}, cadenainv[256]={0}, a;
    int i, longitud=0;
    gets(cadena);
    //transferencia a mayusculas y longitud de cadena
    for(i=0;i<256;i++){
        a=cadena[i];
        if(a!=0){
            longitud++;
        }
        if(a>='a' && a<='z'){
            cadena[i]=cadena[i]-32;
        }
    }
    //inversion cadena
    for(i=0;i<longitud;i++){
        cadenainv[i]=cadena[longitud-i-1];
    }
    //impresion cadena invertida y longitud de cadena
    printf("%s\n%d", cadenainv, longitud);
    return 0;
}
