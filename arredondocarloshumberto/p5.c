#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num[50]={0}, frec[10]={0};
    int i, j;

    srand(time(NULL));


    for(i=0;i<50;i++)
    {
        num[i]= rand()%100;
        printf("%d\n", num[i]);
    }
    getchar();
    for(i=0;i<50;i++)
    {
        if(num[i]>=0 && num[i]<10)
        {
            j=0;
            frec[j]++;
        }
        if(num[i]>=10 && num[i]<20)
        {
            j=1;
            frec[j]++;
        }
        if(num[i]>=20 && num[i]<30)
        {
            j=2;
            frec[j]++;
        }
        if(num[i]>=30 && num[i]<40)
        {
            j=3;
            frec[j]++;
        }
        if(num[i]>=40 && num[i]<50)
        {
            j=4;
            frec[j]++;
        }
        if(num[i]>=50 && num[i]<60)
        {
            j=5;
            frec[j]++;
        }
        if(num[i]>=60 && num[i]<70)
        {
            j=6;
            frec[j]++;
        }
        if(num[i]>=70 && num[i]<80)
        {
            j=7;
            frec[j]++;
        }
        if(num[i]>=80 && num[i]<90)
        {
            j=8;
            frec[j]++;
        }
        if(num[i]>=90 && num[i]<100)
        {
            j=9;
            frec[j]++;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d0 ", i);
        for(j=0;j<frec[i]-1;j++)
        {
            printf("*");
        }
        if(frec[i]==0)
        {
            printf("\n");
        }
        else
        {
            printf("*\n");
        }
    }
    return 0;
}
