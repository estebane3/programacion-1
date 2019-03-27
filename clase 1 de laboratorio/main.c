#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*int main()
{
    int i; //declarar variable
    i=0;     //le damos valor
    while(i<10) // i es menor a 10
    {
        printf("%d\n",(i+1));
        i++;
    }

    return 0;  //while = hacer(mientras)  fin hacer
}
*/



/*int main ()
{
    int i;  //do_while = hacer meintras( condicion)
    i=0;
    do
    {
        i++;
        printf("%d\n",i);
    }
    while(i<10);

    return 0;
}
*/



 /*   int main() // aplicacion de FOR
    {
        int i;
        for(i=0;i<10;i++)
        {
            printf("%d\n",(i+1));
        }
        return 0;
    }
*/




/*int main()

{
    int valor;
    printf("hora\n");
    scanf("%d",&valor);

    switch(valor)
{
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("a dormir");
        break;
    case 7:
    case 8:
        printf("buenos dias");
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
        printf("trabajar");
        break;

        default:
            printf("hora invalida");
            break;

}

    return 0;
}
*/





/* int main()

{
    char valor;
    printf("hora\n");
    scanf("%c",&valor);

    switch(valor)
{
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
        printf("a dormir");
        break;
    case 'h':
    case 'i':
        printf("buenos dias");
        break;
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'ñ':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
        printf("trabajar");
        break;

        default:
            printf("hora invalida");
            break;

}

    return 0;
}
*/
int main()
{
    int valor,min,max,flag=0;
    char rta;
    do
    {
        printf("ingree un valor");
        scanf("%d",&valor);
        if(flag==o || valor>max)
        {
            max=valor;
        }
        if(flag==0 || valor<min)
        {
            min=valor;
            flag=1
        }
        do
        {
        printf("continuar[s/n]?");
        fflush(stdin)
        scanf("%c",&rta);
        rta=toupper(rta);
        }while(rta!='s' && rta!= 'n')
    }while(rta=='s');
    printf("El maximo es %d\n El minimo es %d",max,min);



    return 0;
}



