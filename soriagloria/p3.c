#include <stdio.h>
#include <stdlib.h>

int minusmayuculas(char string[])
{
    int i=0;
    int desp='a'-'A';
    for(i=0;string[i]!='\0';++i)
    {
        if(string[i]>='a'&&string[i]<='z')
        {
            string[i]=string[i]-desp;
        }
    }
}


int longCadena(char cadena[256])
{
    int i=0;
    for (i=0;cadena[i]!='\0';i++);
    return i;
}

int main()
{
   char cadena[256],y[256];
   int x=0;
   printf("Introduce una cadena:\n");
   gets(cadena);
   x=longCadena(cadena);
   minusmayuculas(cadena);
   printf("%s\n",cadena);
   printf("Tiene %d de caracteres\n",x);

}

