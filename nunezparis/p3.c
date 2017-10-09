#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cda[256]={0}, cdaI[256]={0};
    int i, j, k, l=0;

    printf("Ingrese la cadena:\n");
    gets(cda);
    for (i=0; i<256; i++){
        if (cda[i]!=0){
            l++;
        }
    }
    k=l-1;
    for (i=0; i<l; i++){
        cdaI[k-i]=cda[i];
    }
    for (i=0; i<l; i++){
        if (cdaI[i]>=97 && cdaI[i]<=122){
            cdaI[i]=cdaI[i]-32;
        }
    }
    printf("La cadena inversa es: \n");
    for (i=0; i<l; i++){
        printf("%c",cdaI[i]);
    }
    printf("\n");
    printf("La longitud es: %d",l);
    return 0;
}
