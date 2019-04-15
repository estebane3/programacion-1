#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void infoempelados( eEmpleado vec[], int tamaño)
void mostrarEmpleado(estado emp)
void mostrarEmpleados(estado vec[], int tamaño)

typedef estruct{
    int legajo;
    char nombre[25];
    char sexo;
    float sueldo;
    int estado;
}eEmpleado

int menu();
void infoempelados(eEmpleado vec[], int tamaño);
void mostrarEmpleado(eEmpeleado vec[], int tamaño);
void mostrarEmpleados(eEmpleado vec[], int tamaño);
void
int buscarLibre(eEmpleado vec[], int tamaño);

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

void infoempelados(eEmpleado vec[], int tamaño){
    for(int i=0;i<tamaño;i++)
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

void mostrarEmpleados(eEmpleado vec [], int tamaño){



}
int buscarLibre(eEmpleado)
int buscarLibre(eEmpleado vec[], int tamaño);
