#include <stdio.h>
#include <stdlib.h>
void unafuncion(int x);

int main()
{
    int x =10;

    printf("x al inicio vale %d\n\n", x);
    unafuncion(x);
    printf("x al final del main vale %d", x);
    return 0;
}
void unafuncion(int x){
x=4;
printf("x dentro de la funcion vale %d\n\n", x);
}
