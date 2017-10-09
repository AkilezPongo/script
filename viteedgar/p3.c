#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0;
    int j=0;
    int k=0;
    int e=1;
    char a[256]={0};
    char b[256]={0};

    gets(a);


    for(i=0; i<256; i++)
    {
        if(a[i]!=0)
        {
            j++;
        }

    }
    k=j-1;

    for(k=i; k<=256; k++)
    {
        b[k-i]=b[i];
    }




    for(i=0; i<256; i++)
    {

        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        if(b[i]>='a' && b[i]<='z')
        {
            b[i]=b[i]-32;
        }

    }


    printf("%s\n %d\n", a, j);
    return 0;
}
