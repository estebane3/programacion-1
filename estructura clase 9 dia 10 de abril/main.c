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
    struct datos agenda;

    strcpy(agenda.nombre, "yanina");
    strcpy(agenda.apellido, "scudero");
    strcpy(agenda.calle, "avenida mitre");
    agenda.numero=750;

    printf("el nombre es: %s ", agenda.nombre);
    printf("\nel apellido es %s ", agenda.apellido);
    printf("\nla calle es: %s ", agenda.calle);
    printf("\nel numero es %d ", agenda.numero);


    return 0;
}
