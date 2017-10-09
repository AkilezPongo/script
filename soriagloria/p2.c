#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    int b1=0;
    int b2=0;
    printf("Escribe b1: ");
    scanf("%d",&b1);
    printf("Escribe b2: ");
    scanf("%d",&b2);
    a=b1+b2;
    b=a+b2;
    c=b+a;
    d=b+c;
    e=c+d;
    f=d+e;
    g=f+e;
    h=f+g;
    printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",b1,b2,a,b,c,d,e,f,g,h);
    return 0;
}
