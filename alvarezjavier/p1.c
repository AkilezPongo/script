#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0,z=0;

    while(z<=10000)
    {
        scanf("%d",&x);
        y=y+x;
        z=y*y;
    }
    printf("El cuadrado de la suma es: %d\n",z);
    return 0;
}
