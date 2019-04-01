#include <stdio.h>
#include <stdlib.h>
void menu();
void sumar(int num1, int num2);
void restar(int num1, int num2);
void multiplicar(int num1, int num2);
void dividir(int num1, int num2);
void factorial(int num1, int num2);


int main()
{

   menu(); // LLAMAMOS A LA FUNCION



    return 0;
}
void menu(){

     // ALMACENAR LA OPCION QUE EL USUARIO DIGITE
    int num1;
    int num2;
    int opciones;

    printf("1. Sumar");
    printf("\n2. Restar");
    printf("\n3. Multiplicar");
    printf("\n4. Dividir");
    printf("\n5. Factorial");

    // ALMACENAMOS LA OPCION
    printf("\nDigite su opcion: ");
    scanf("%d" , &opciones);

    // PEDIRLE LOS VALORES


    printf("\nDigite valor para numero1: ");
    scanf("%d" , &num1);

    printf("\nDigite valor para numero2: ");
    scanf("%d" , &num2);

    switch (opciones)
    {
        case 1: sumar(num1,num2);
        break;
        case 2: restar(num1,num2);
        break;
        case 3: multiplicar(num1,num2);
        break;
        case 4: dividir(num1,num2);
        break;
        case 5: factorial(num1,num2);
        break;
        default:
        printf("Opcion invalida");

    }

}

void sumar(int num1, int num2) //LA SUMA RECIBE 2 PARAMETROS, LOS RESUELVE Y MUESTRA, NO HACE FALTA MANDARLO AL MAIN
{

printf("El resultado del calculo es : %d " , num1 + num2);

}

void restar(int num1, int num2)  //LA RESTA RECIBE 2 PARAMETROS, LOS RESUELVE Y MUESTRA, NO HACE FALTA MANDARLO AL MAIN
{

printf("El resultado de su calculo: %d " , num1 - num2);

}


void multiplicar(int num1, int num2) //LA MULTIPLICACION  RECIBE 2 PARAMETROS, LOS RESUELVE Y MUESTRA, NO HACE FALTA MANDARLO AL MAIN
{

printf("El resultado de su calculo: %d " , num1 * num2);

}


void dividir(int num1, int num2) //LA DIVISION  RECIBE 2 PARAMETROS, LOS RESUELVE Y MUESTRA, NO HACE FALTA MANDARLO AL MAIN
{

printf("El resultado de su calculo: %d " , num1 / num2);

}
void factorial(int num1, int num2)  //EL FACTORIAL  RECIBE 2 PARAMETROS, LOS RESUELVE Y MUESTRA, NO HACE FALTA MANDARLO AL MAIN
{
int i;
int factorial_1=1;
int factorial_2=1;

for(i=1;i<=num1;i++)
{
    factorial_1=factorial_1*i;

    printf("\nEl factorial del primer numero es: %d", factorial_1);
}
for(i=1;i<=num2;i++)
{
    factorial_2=factorial_2*i;
    printf("\nEl factorial del segundo numero es: %d", factorial_2);
}




}
