#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void infoempelados( eEmpleado vec[], int tama�o)
void mostrarEmpleado(estado emp)
void mostrarEmpleados(estado vec[], int tama�o)

typedef estruct{
    int legajo;
    char nombre[25];
    char sexo;
    float sueldo;
    int estado;
}eEmpleado

int menu();
void infoempelados(eEmpleado vec[], int tama�o);
void mostrarEmpleado(eEmpeleado vec[], int tama�o);
void mostrarEmpleados(eEmpleado vec[], int tama�o);
void
int buscarLibre(eEmpleado vec[], int tama�o);

int main()
{
    char  seguir= 's';
    char confirma;
    eEmpleado lista[TAM];
    infoempelados(lista, TAM);

    do{
        switch(menu())
        {
        case 1:



        case 2:

        case 3:


        case 4:


        case 5:


        case 6:








        }
    }while(seguir != 's')

    return 0;
}

void infoempelados(eEmpleado vec[], int tama�o){
    for(int i=0;i<tama�o;i++)
    {
    vec[i].estado=0;
    }

}
int menu{
    printf("1.mostrar");
    printf("2.")




}

void mostrarEmpleado(eEmpleado emp){
    printf("%d  %s  %c    %.2f",emp.legajo, emp.nombre emp.sexo, emp.sueldo emp.estado)

}

void mostrarEmpleados(eEmpleado vec [], int tama�o){



}
int buscarLibre(eEmpleado)
int buscarLibre(eEmpleado vec[], int tama�o);
