#include <stdio.h>
#include <stdlib.h>
//Hecho por Emmanuel Jiménez Chavero
//Tercer Examen parcial de programación
//Profesor Erik Rivas
int main()
{
    int a=1,b=1,c=0,i;
    printf("%d %d ",a,b);
    for(i=0;i<10;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }

    return 0;
}
