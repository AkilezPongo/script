#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int num[10]={0};
    int i=0;

    srand(time(NULL));
    num=rand()%100;

    for(i=0;i<10;i++)
    {
      printf("%d\n",num);
    }



    return 0;
}
