#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char A[100];
    int a,i,j,k,p,l,B[100];
    gets(A);
    for(i=0;A[i]!='\0';i++)
    {
        l=i+1;
    }
    printf("%d\n",l);
    a='1';

    for(i=0;i<l;i++)
    {
        if(A[i]!=' ')
        {
            B[i]=A[i]-48;
        }
    }
    printf("%d",B);
    printf("%d",a);
    for(i=0;i<l;i++)
    {
        k=A[i]+A[i+1];
        p=pow(k,2);
    }
    return 0;
}
