#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int b[50];
    int aux[256]={0};
    int intervalo=0;
    int i=0,j=0;
    srand(time(NULL));
    for(i=0;i<50;i++)
    {
        b[i]=rand()%100;
        printf("%d\n",b[i]);
    }
    for(i=0;i<50;i++)
    {
        if(b[i]>=0&&b[i]<10){aux[0]++;}
        if(b[i]>=10&&b[i]<20){aux[1]++;}
        if(b[i]>=20&&b[i]<30){aux[2]++;}
        if(b[i]>=30&&b[i]<40){aux[3]++;}
        if(b[i]>=40&&b[i]<50){aux[4]++;}
        if(b[i]>=50&&b[i]<60){aux[5]++;}
        if(b[i]>=60&&b[i]<70){aux[6]++;}
        if(b[i]>=70&&b[i]<80){aux[7]++;}
        if(b[i]>=80&&b[i]<90){aux[8]++;}
        if(b[i]>=90&&b[i]<100){aux[9]++;}
    }


     printf("\n");
    for(i=0;i<=9;i++)
    {
        intervalo=i*10;
        printf("%02d",intervalo);
        for(j=0;j<aux[i];j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
