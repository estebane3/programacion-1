#include <stdio.h>
#include <stdlib.h> //RECURSIVIDAD (NO SE USA)

/*int factorial(int);
int main()
{
    int valor,result;
    printf("ingrese: ");
    scanf("%d",&valor);
    result=factorial(valor);
    printf("el factorial de %d es %d",valor,result);
    return 0;
}
int factorial(int n){
int respuesta;
if(n==1){
    return 1;
}
respuesta=n*factorial(n-1);
return respuesta;
}
*/
int factorial(int );

int main()
{
    int valor,result;

    printf("ingrese: ");
    scanf("%d",&valor);

    result=factorial(valor);

    printf("el factorial de %d es %d",valor,result);
    return 0;
}
int factorial(int n)
{
    int respuesta;

        for(n=0;n>=1;n--)
        {
            respuesta=n*factorial(n-1);
        }

    return respuesta;
}
