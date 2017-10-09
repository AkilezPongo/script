#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int numeros[50]={0}, i=0, j=0, mayor, t1=0, t2=0, t3=0, t4=0, t5=0, t6=0, t7=0, t8=0, t9=0, t10=0;
    srand(time(NULL));
    for(i=0;i<50;i++)
    {
        numeros[i]=rand()%100;
    }
    //IMPRIMIMOS LOS NUMEROS
    for(i=0;i<50;i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    for(j=0;j<50;j++)
    {
        for(i=0;i<50;i++)
        {
            if(numeros[i]>numeros[i+1])
            {
                mayor=numeros[i];
                numeros[i]=numeros[i+1];
                numeros[i+1]=mayor;
            }
        }
    }
    // CONTAMOS LOS CARACTERES
    for(i=0;i<50;i++)
    {
        if(numeros[i]>=0 && numeros[i]<=9)
        {printf("%d ", numeros[i]);
            t1++;
        }
        if(numeros[i]>=10 && numeros[i]<=19)
        {
            t2++;
        }
        if(numeros[i]>=20 && numeros[i]<=29)
        {
            t3++;
        }
        if(numeros[i]>=30 && numeros[i]<=39)
        {
            t4++;
        }
        if(numeros[i]>=40 && numeros[i]<=49)
        {
            t5++;
        }
        if(numeros[i]>=50 && numeros[i]<=59)
        {
            t6++;
        }
        if(numeros[i]>=60 && numeros[i]<=69)
        {
            t7++;
        }
        if(numeros[i]>=70 && numeros[i]<=79)
        {
            t8++;
        }
        if(numeros[i]>=80 && numeros[i]<=89)
        {
            t9++;
        }
        if(numeros[i]>=90 && numeros[i]<=99)
        {
            t10++;
        }
    }
    printf("00 ");
    for(i=0;i<t1;i++)
    {
        printf("*");
    }
    printf("\n");

    printf("10 ");
    for(i=0;i<t2;i++)
    {
        printf("*");
    }
    printf("\n");

    printf("20 ");
    for(i=0;i<t3;i++)
    {
        printf("*");
    }
    printf("\n");

    printf("30 ");
    for(i=0;i<t4;i++)
    {
        printf("*");
    }
    printf("\n");

    printf("40 ");
    for(i=0;i<t5;i++)
    {
        printf("*");
    }
    printf("\n");

    printf("50 ");
     for(i=0;i<t6;i++)
    {
        printf("*");
    }
    printf("\n");

    printf("60 ");
     for(i=0;i<t7;i++)
    {
        printf("*");
    }
    printf("\n");

    printf("70 ");
     for(i=0;i<t8;i++)
    {
        printf("*");
    }
    printf("\n");

    printf("80 ");
     for(i=0;i<t9;i++)
    {
        printf("*");
    }
    printf("\n");

    printf("90 ");
     for(i=0;i<t10;i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
