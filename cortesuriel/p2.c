#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int b1=1;
    int b2=1;
    int c=0;

    printf("%d\n",b1);
    printf("%d\n",b1);

    for(i=0;i<8;i++)
    {
        c=b1+b2;
        b1=b2;
        b2=c;
        printf("%d\n",c);

    }
}
