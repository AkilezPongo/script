#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,y,z,cont;
    z=1;
    y=1;
    printf("1\n1\n",z);
    for (cont=1;cont<=8;cont=cont+1)
        {
            z=x+y;
            printf("%d\n",z);
            x=y;
            y=z;
        }
    return 0;
}
