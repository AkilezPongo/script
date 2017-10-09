#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int j=0;
    int num[10]={0};
    int b1=1;
    int b2=1;
    int c=0;


    for(i=0;i<10;i++)
    {
        num[0]=b1;
        num[1]=b2;
        num[2]=b1+b2;
        num[3]=num[2]+num[1];
        num[4]=num[3]+num[2];
        num[5]=num[4]+num[3];
        num[6]=num[5]+num[4];
        num[7]=num[6]+num[5];
        num[8]=num[7]+num[6];
        num[9]=num[8]+num[7];

    }

    for(j=0;j<9;j++)
    {
        c=num[j];
        printf("%d,",c);

    }

    c=num[9];
    printf("%d\n",c);


}
