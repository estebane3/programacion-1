#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5]={7,5,6,2,8};
    int aux;
    int cant=5;
    int j;
    int i;

    for(i=0;i<cant-1;i++){
            for( j=i+1;j<cant;j++)
        {
            if(vector[i]>vector[j]){                      //armarlo en forma ascendente ">" y "<" forma descendente
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
        }
    }
    for(i=0;i<cant;i++){
        printf("%d\n",vector[i]);
    }
    return 0;
}
