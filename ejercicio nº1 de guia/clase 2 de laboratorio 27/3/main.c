#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int media;
    int suma;

    printf("ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("ingrese el tercer numero: ");
    scanf("%d", &num3);
    printf("ingrese el cuarto numero: ");
    scanf("%d", &num4);
    printf("ingrese el quinto numero: ");
    scanf("%d", &num5);

    suma=num1+num2+num3+num4+num5;

    media=suma/5;
    printf("la media de los 5 numero ingresados es %d", media);

}
