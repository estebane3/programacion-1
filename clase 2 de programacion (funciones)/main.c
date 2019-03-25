#include <stdio.h>
#include <stdlib.h>
int sumar(int x, int y);

int main()
{
    int num1;
    int num2;
    int resultado;

    printf("ingrese un numero: ");
     scanf("%d", &num1);

    printf("ingrese otro numero: ");
    scanf("%d", &num2);

    resultado=sumar(num1, num2);

    printf("la suma es %d", resultado);

    return 0;
}
int sumar(int x, int y){
int rta;

rta=x+y;

return rta;


}

