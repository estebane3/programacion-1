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
//para aacceder al cualquiere dato se pone agenda.nombre agenda.apellido
int main()
{
    struct datos vecagenda[3];
    for(int i=0;i<3;i++){

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
    for(int i=0;i<3;i++){
    printf(" nombre   apellido   calle   numero \n");
    printf("   %s        %s        %s       %d \n",vecagenda[i].nombre, vecagenda[i].apellido, vecagenda[i].calle,vecagenda[i].numero);
    }
    return 0;
}
