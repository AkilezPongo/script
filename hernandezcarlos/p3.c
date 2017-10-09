#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[256]={0};
    char b[356]={0};
    int lona,i;
    gets(a);


    //convertir a mayusculas
    for (i=0;i<256;i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }

    }
    for (i=0;a[i]!='\0'; i++);
    lona=i;

    for (i=0;i<lona; i++)
    {
        b[lona-i-1]=a[i];
    }



    {
        printf("%s\n", b);
        printf("%d",lona);
    }
    return 0;
}
