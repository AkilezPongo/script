#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Hecho por Emmanuel Jiménez Chavero
//Tercer Examen parcial de programación
//Profesor Erik Rivas
int main()
{
    int s=0,i,a[50]={0};
    float p,S=0,dif,de;
    srand(time(NULL));
    for(i=0;i<50;i++)
    {
        a[i]=rand()%100;
        s=s+a[i];
        printf("%d ",a[i]);
        if(i==24)
        {
            printf("\n");
        }
    }
    p=s/50.0;
    for(i=0;i<50;i++)
    {
        dif=a[i]-p;
        S=S+(dif*dif);
    }
    de=sqrt(S/(50.0-1.0));
    printf("\nMean:%f\nStDev:%f",p,de);
    return 0;
}
