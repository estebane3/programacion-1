#include <stdio.h>
#include <stdlib.h>
void muestra (int *x, int y);
int main()
{
    int x, y;
    printf("ingrese: ");
    scanf("%d",&x);
    printf("ingrese: ");
    scanf("%d", &y);

    muestra(&x, y);
    printf("x: %d  y: %d", x,y);

    return 0;
}
void muestra(int *x, int y){
    *x=y;
    printf("x:%d y: %d", x,y);
}
