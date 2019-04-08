#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre [20];
    char apellido[20];
    char nombre_completo[41];


    printf("ingrese su nombre\n");
    gets(nombre);

    printf("ingrese su apellido\n");
    gets(apellido);
    strcpy(nombre_completo,apellido);
    strcat(nombre_completo, ", " );
    strcat(nombre_completo, nombre);
    strlwr(nombre_completo);

    nombre_completo[0]=toupper(nombre_completo[0]);

    for(int i=0;i<strlen(nombre_completo);i++)
    {
        if(nombre_completo[i]==' ')
            {
                nombre_completo[i+1]=toupper(nombre_completo[i+1]);
        }
    }
    puts(nombre_completo);

    return 0;
}
