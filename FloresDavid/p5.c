#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    ////////////////////////////////////////Problema 5
    int i,x,cadena[100]={0};
    srand(time(NULL));

    for(i=0;i<50;i++)
    {
        x=rand()%100;
        cadena[i]=x;
    }
    for(i=0;i<50;i++)
    {
        printf("%d\n",cadena[i]);
    }
    printf("\n\n");
    printf("00 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]<10)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("10 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]>=10 && cadena[i]<20)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("20 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]>=20 && cadena[i]<30)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("30 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]>=30 && cadena[i]<40)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("40 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]>=40 && cadena[i]<50)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("50 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]>=50 && cadena[i]<60)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("60 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]>=60 && cadena[i]<70)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("70 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]>=70 && cadena[i]<80)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("80 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]>=80 && cadena[i]<90)
        {
            printf("*");
        }
    }
    printf("\n");
    printf("90 ");
    for(i=0;i<50;i++)
    {
        if(cadena[i]>=90 && cadena[i]<100)
        {
            printf("*");
        }
    }


    return 0;
}
