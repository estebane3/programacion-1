#include <stdio.h>   //obtener maximos ejercicio 1
#include <stdlib.h>
int obtener_maximos(int x, int y, int z);

int main()
{
    int num1;
    int num2;
    int num3;
    int maximo;

    printf("ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("ingrese el tercer numero: ");
    scanf("%d", &num3);

    maximo = obtener_maximos(num1, num2, num3);

    printf("el numero maximo es %d", maximo);

    return 0;
}
int obtener_maximos(int x, int y, int z)
{
    int max;
    int valor;
    int flag=0;

    if(flag==0 || valor>max)
        {
            max=valor;
            flag=1;
        }
        return obtener_maximos;
}

