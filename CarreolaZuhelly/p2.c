#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>





int main()
{
    int b1,b2,i,c,B[9];
    scanf("%d",&b1);
    scanf("%d",&b2);
    for(i=2;i<10;i++)
        {
            B[1]=b1;
            B[2]=b2;
            b1=B[i-2];
            b2=B[i-1];
            c=b1+b2;
            B[i]=c;
        }
    puts(B);
    return 0;
}
