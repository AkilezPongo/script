#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b1=1,b2=1,c,i;

    printf("%d\n%d\n",b1,b2);

    for(i=0;i<8;i++)
    {
        c=b1+b2;
        printf("%d\n",c);
        b1=b2;
        b2=c;
    }

    return 0;
}
