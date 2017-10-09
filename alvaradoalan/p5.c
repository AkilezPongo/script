#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i=0;
    int j=0;
    int m=0;
    int k=0;
    int l=0;
    int d=0;
    int temp=0;
    int num[10]={0};

    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        num[i]=rand()%100;

        printf("%d\n",num[i]);
    }


    for(j=0;j<10;j++)
    {
        num[j]=num[j]/10;
        num[j]=num[j]*10;

    }

    printf("\nel resultado obtenido es\n");

    for(k=1;k<10;k++)
    {
        for(m=0;m<10;m++)
        {
            if(num[k]<num[k+1])
            {
                temp=num[k];
                num[k]=num[k+1];
                num[k+1]=temp;

            }
        }


        printf("%d",num[k]);

        d=num[k]/10;

        for(l=0;l<d;l++)
        {
            printf("*");
        }
        printf("\n");

    }



}
