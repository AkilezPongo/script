#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, n[50]={0}, n2[10]={0};

    for(i=0; i<50; i++)
    {
        n[i]=rand()%100;
        printf("%d\n", n[i]);
    }
    printf("\n");


    for(i=0; i<50; i++){
        printf("%d", n[i]);
        for(j=0; j<=n[i]; j++)

        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
