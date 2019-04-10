#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct datos{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
};

int main()
{
    struct datos vecagenda[3], veccontactos[3], vecamigos[3];
    int i;

    for(i=0;i<3;i++){
    printf("ingrese el nombre ");
    gets(vecagenda[i].nombre);

    printf("ingrese el apellido ");
    gets(vecagenda[i].apellido);

    printf("ingrese la calle ");
    gets(vecagenda[i].calle);

    printf("\nIngrese numero de la calle ");
    scanf("%d", &vecagenda[i].numero);
    fflush(stdin);
    }
    for(i=0;i<3;i++){
    printf(" nombre   apellido   calle   numero \n");
    printf("   %s        %s        %s       %d \n",vecagenda[i].nombre, vecagenda[i].apellido, vecagenda[i].calle,vecagenda[i].numero);
    }

    for(i=0;i<3;i++)
    {
        strcpy(veccontactos[i].nombre, vecagenda[i].nombre);
        strcpy(veccontactos[i].apellido,vecagenda[i].apellido);
        strcpy(veccontactos[i].calle,vecagenda[i].calle);
        veccontactos[i].numero=vecagenda[i].numero;

        printf("\nnombre %d copiado %s", i,veccontactos[i].nombre);
        printf("\napelido %d copiado %s", i,veccontactos[i].apellido);
        printf("\ncalle %d copiado %s", i,veccontactos[i].calle);
        printf("\nnumero %d copiado %d", i,veccontactos[i].numero);


    }







    return 0;
}
