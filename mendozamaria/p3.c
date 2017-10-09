#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cada[256]={0};
    char cadb[256]={0};
    int i=0;
    int j=0;
    gets(cada);
    int lc=0;
    for(j=0;cada[j]!='\0';j++);
    for (i=0;i<256;i++)
    {
        if (cada[i]>='a'&&cada[i]<='z')
        {
           cada[i]=cada[i]-32;
        }
    }
    printf("%s\n",cada);
    printf("%d\n",j);
    return 0;
}




