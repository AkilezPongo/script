#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2,b=3;
    intercambia(&a,&b);
    printf("Los nuevos valores son %d  %d",a,b);
    return 0;
}
void intercambia(int a, int b)
{
    int *x,*y,z=0;
    z=*x;
    *x=*y;
    *y=z;
}
