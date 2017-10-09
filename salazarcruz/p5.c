#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int cad[50];
    int x=0,i,j,suma=0;
    int hora=time(NULL);
    srand(hora);
    for(i=0;i<50;i++)
    {
        cad[i]=rand()%100;
        printf("%d\n",cad[i]);
    }
    for(i=0;i<100;i+=10)
    {
        printf("\n%d",i);
        for(j=0;j<50;j++)
        {
            if(cad[j]>=i&&cad[j]<i+10)
            {
                printf("*");
            }
        }
    }
    return 0;
}
