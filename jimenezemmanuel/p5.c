#include <stdio.h>
#include <stdlib.h>
//Hecho por Emmanuel Jiménez Chavero
//Tercer Examen parcial de programación
//Profesor Erik Rivas
int main()
{
    int i,j,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0,x9=0,x=0,a[50]={0};
    srand(time(NULL));
    for(i=0;i<50;i++)
    {
        a[i]=rand()%100;
        printf("%d ",a[i]);
        if(i==24)
        {
            printf("\n");
        }
    }
    for(i=0;i<50;i++)
    {
        if (a[i]<10&&a[i]>=0)
        {
            x++;
        }
        if (a[i]<20&&a[i]>=10)
        {
            x1++;
        }
        if (a[i]<30&&a[i]>=20)
        {
            x2++;
        }
        if (a[i]<40&&a[i]>=30)
        {
            x3++;
        }
        if (a[i]<50&&a[i]>=40)
        {
            x4++;
        }
        if (a[i]<60&&a[i]>=50)
        {
            x5++;
        }
        if (a[i]<70&&a[i]>=60)
        {
            x6++;
        }
        if (a[i]<80&&a[i]>=70)
        {
            x7++;
        }
        if (a[i]<90&&a[i]>=80)
        {
            x8++;
        }
        if (a[i]<100&&a[i]>=90)
        {
            x9++;
        }
    }
    printf("\n00 ");
    for(i=0;i<x;i++)
    {
        printf("*");
    }
    printf("\n10 ");
    for(i=0;i<x1;i++)
    {
        printf("*");
    }
    printf("\n20 ");
    for(i=0;i<x2;i++)
    {
        printf("*");
    }
    printf("\n30 ");
    for(i=0;i<x3;i++)
    {
        printf("*");
    }
    printf("\n40 ");
    for(i=0;i<x4;i++)
    {
        printf("*");
    }
    printf("\n50 ");
    for(i=0;i<x5;i++)
    {
        printf("*");
    }
    printf("\n60 ");
    for(i=0;i<x6;i++)
    {
        printf("*");
    }
    printf("\n70 ");
    for(i=0;i<x7;i++)
    {
        printf("*");
    }
    printf("\n80 ");
    for(i=0;i<x8;i++)
    {
        printf("*");
    }
    printf("\n90 ");
    for(i=0;i<x9;i++)
    {
        printf("*");
    }
    return 0;
}
