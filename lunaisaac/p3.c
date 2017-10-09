#include <stdio.h>
#include <stdlib.h>
void mayusculas(char *cad)
{
    int i=0;
    for(i=0;*(cad+i)!='\0';i++)
    {
        if(*(cad+i)>='a' && *(cad+i)<='z')
        {
            *(cad+i)=*(cad+i)-32;
        }
    }
}
int tamcadena(char  inverso[200])
{
    int i=0;
    for(i=0;inverso[i]!='\0';i++);
    return i;
}
int main()
{
    char cadena[200]={0}, inverso[200]={0};
    int i=0, e=0, t, tam;
    printf("Escriba una cadena de texto:\n");
    gets(cadena);
    tam=tamcadena(cadena);
    for(i=tam-1;i>=0;i--)
    {
        inverso[e]=cadena[i];
        e++;
    }
    t=tamcadena(inverso);
    mayusculas(inverso);
    printf("%s\n", inverso);
    printf("%d\n", t);
    return 0;
}
