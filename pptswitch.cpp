//Sanchez Santos B. Alexis 367714
//30/agosto/2023
//CREAR UN JUEGO DE CHINCHAMPU CON SWITCH
//CHINCHAMPU 9
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
    ia=rand()%3;
    switch(opc)
    {
        case 0:
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
        break;
        case 1:
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
        break;
        case 2:
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
        break;
        default:
        printf("\nError, esa opcion no existe");
        break;    
    }

    return 0;
    
}