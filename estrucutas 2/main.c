#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


struct datos{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
    int codigo_postal;
};
//para aacceder al cualquiere dato se pone agenda.nombre agenda.apellido
int main()
{
    struct datos agenda;

    printf("ingrese el nombre ");
    gets(agenda.nombre);
    fflush(stdin);//fflush sirve para borrar el buffer osea borrar basura

    printf("ingrese el apellido ");
    gets(agenda.apellido);
    fflush(stdin);


    printf("ingrese la calle ");
    gets(agenda.calle);
    fflush(stdin);

    printf("\nIngrese numero de la calle ");
    scanf("%d", &agenda.numero);
    fflush(stdin);

    printf("\nIngrese el codigo postal ");
    scanf("%d", &agenda.codigo_postal);
    fflush(stdin);

    printf(" %s  ",agenda.nombre);
    printf(" %s  ", agenda.apellido);
    printf(" %s  ", agenda.calle);
    printf(" %d  ", agenda.numero);
    printf(" %d  ", agenda.codigo_postal);


    return 0;
}
