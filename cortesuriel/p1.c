#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=0;
    int x=0;
    int suma=0;
    int cuad=0;

    /*i=(1+2+100)*(1+2+100);
    printf("%d\n",i);*/

    for(i=0; i<200; i++)
    {
        scanf("%d",&x);
        suma=suma+x;
        cuad=(suma)*(suma);
        if(cuad>=10000)
        {
            printf("\nEl cuadrado de la suma es: %d\n",cuad);
            return 0;
        }

    }
    return 0;

}
