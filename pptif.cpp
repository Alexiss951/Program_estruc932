//Sanchez Santos B. Alexis 367714
//30/agosto/2023
//HACER UN JUEGO DE CHINCHAMPU CON FUNCIONES ANIDADAS
//CHINCHAMPU 8
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int opc, ia;
    srand(time(NULL));
    printf("Elige una opcion");
    printf("\n0-------Piedra");
    printf("\n1--------Papel");
    printf("\n2-----Tijeras ");
    scanf("%d",&opc);

    if(opc<0 || opc>2)
    {
        printf("\nError, esa opcion no existe");
        return 0;
    }
    ia=rand()%3;

    if(opc==0)
    {
        if(ia==0)
        {
            printf("\nPiedra vs Piedra");
            printf("\nEmpate");
        }
        else
        {
            if(ia==1)
            {
                printf("\nPiedra vs papel");
                printf("\nPerdiste");
            }
            else
            {
                printf("\nPiedra vs tijeras");
                printf("\nGanaste");
            }
        }
    }
    else
    {
        if(opc==1)
        {
            if(ia==0)
            {
                printf("\nPapel vs piedra");
                printf("\nGanaste");
            }
            else
            {
                if(ia==1)
                {
                    printf("\nPapel vs papel");
                    printf("\nEmpate");
                }
                else
                {
                    printf("\nPapel vs tijeras");
                    printf("\nPerdiste");
                }
            }
        }
        else
        {
            if(ia==0)
            {
                printf("\nTijeras vs piedra");
                printf("\nPerdiste");
            }
            else
            {
                if(ia==1)
                {
                    printf("\nTijeras vs papel");
                    printf("\nGanaste");
                }
                else
                {
                    printf("\nTijeras vs tijeras");
                    printf("\nEmpate");
                }
            }
        }
    }
    return 0;
}