#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int  i=0 ;
    int sum=0;
    int cuadrado=0;
    int y=0;
    int x=0;


   while (cuadrado <=10000)
   {
        scanf ("%d", &x);
        sum=sum+x;
        cuadrado=(sum*sum);
   }
   printf("El cuadrado de la suma es:  %d", cuadrado);
    return 0;
}
