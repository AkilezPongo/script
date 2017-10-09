#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ent[250]={0};
    char sal[250]={0};
    int i=0, j=0;
    int lon1=0;
    int lon2=0;

    gets(ent);

    for(i=0;ent[i]!='\0';i++)
    {
        if(ent[i]>='a' && ent[i]<='z')
        {
            ent[i]=ent[i]-32;
        }
    }
    while(ent[lon1]!='\0')
    {
        lon1++;
    }

    for(i=0,j=lon1-1;i<lon1,j>=0;i++,j--)
    {
        sal[i]=ent[j];
    }
    while(sal[lon2]!='\0')
    {
        lon2++;
    }

    printf("%s\n",sal);
    printf("%d\n",lon2);
    return 0;

}
