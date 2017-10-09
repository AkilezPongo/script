#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j=0, n[50]={0}, c[10]={0};
    srand(time(NULL));

    for (i=0; i<50; i++){
        n[i]=rand()%99;
    }
    for (i=0; i<50; i++){
        printf("%d\n",n[i]);
    }
    printf("\n");
    for(i=0; i<50; i++){
        if(j<10){
            if (n[i]<10){
                c[j]=c[j]+1;
            }
            if (n[i]<20){
                c[j]=c[j]+1;
            }
            if (n[i]<30){
                c[j]=c[j]+1;
            }
            if (n[i]<40){
                c[j]=c[j]+1;
            }
            if (n[i]<50){
                c[j]=c[j]+1;
            }
            if (n[i]<60){
                c[j]=c[j]+1;
            }
            if (n[i]<70){
                c[j]=c[j]+1;
            }
            if (n[i]<80){
                c[j]=c[j]+1;
            }
            if (n[i]<90){
                c[j]=c[j]+1;
            }
            if (n[i]<100){
                c[j]=c[j]+1;
            }
        }
        j++;
    }
    for (i=0; i<10; i++){
        printf("%02d",i*10);
        for (j=0; j<c[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
