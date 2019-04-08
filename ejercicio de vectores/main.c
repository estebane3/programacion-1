#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vec[5];
   for(int i=0; i<5; i++)
   {
       printf("ingrese el numero\n");
       scanf("%d", &vec[i]);
   }
   printf("el vector cargado con los numero es: %d\n\n", vec);




    return 0;
}
