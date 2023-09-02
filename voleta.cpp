//Sanchez Santos B. Alexis 367714
//30/agosto/2023
//CALCULAR LA CALIFICACION DE PROGRAMACION CON BASE EN 5 EXAMENES
//PROGAMACION 7
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int exa1, exa2, exa3, exa4, exa5;
    float prom;
    printf("Calificacion del primer examen ");
    scanf("%d",&exa1);
    printf("\nCalificacion del segundo examen ");
    scanf("%d",&exa2);
    printf("\nCalificacion del tercer examen ");
    scanf("%d",&exa3);
    printf("\nCalificacion del cuarto examen ");
    scanf("%d",&exa4);
    printf("\nCalificacion del quinto examen ");
    scanf("%d",&exa5);

    if(exa1<exa2)
    {
        if(exa1<exa3)
        {
            if(exa1<exa4)
            {
                if(exa1<exa5)
                {
                    exa1=0;
                }
                else
                {
                    exa5=0;
                }
            }
            else
            {
                if(exa4<exa5)
                {
                    exa4=0;
                }
                else
                {
                    exa5=0;
                }
            }
        }
        else
        {
            if(exa3<exa4)
            {
                if(exa3<exa5)
                {
                    exa3=0;
                }
                else
                {
                    exa5=0;
                }
            }
            else
            {
                if(exa4<exa5)
                {
                    exa4=0;
                }
                else
                {
                    exa5=0;
                }
            }
        }
    }
    else
    {
        if(exa2<exa3)
        {
            if(exa2<exa4)
            {
                if(exa2<exa5)
                {
                    exa2=0;
                }
                else
                {
                    exa5=0;
                }
            }
            else
            {
                if(exa4<exa5)
                {
                    exa4=0;
                }
                else
                {
                    exa5=0;
                }
            }
        }
        else
        {
            if(exa3<exa4)
            {
                if(exa3<exa5)
                {
                    exa3=0;
                }
                else
                {
                    exa5=0;
                }
            }
            else
            {
                if(exa4<exa5)
                {
                    exa4=0;
                }
                else
                {
                    exa5=0;
                }
            }
        }
    }

    if(exa1==exa2 && exa2==exa3 && exa3==exa4 && exa4==exa5)
    {
        prom=exa1;
    }
    prom=(exa1+exa2+exa3+exa4+exa5)/4;

    printf("\nPromedio final de %f",prom);

    return 0;
}