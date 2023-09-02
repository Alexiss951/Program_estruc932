//Sanchez Santos B. Alexis 367714
//30/agosto/2023
//CALCULAR LA FACTURA CON BASE EL TIPO Y DURACION DE UNA LLAMADA
//TELNOR 5
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int opc, min;
    float sub, iva, tt;
    printf("Elige una opcion");
    printf("\n1-----------Local");
    printf("\n2--------Nacional");
    printf("\n3--Internacional ");
    scanf("%d",&opc);
    if(opc==1)
    {
        printf("\nLlamada local");
        printf("\nCuantos minutos duro la llamada ");
        scanf("%d",&min);
        sub=min*3;
    }
    else
    {
        if(opc==2)
        {
            printf("\nLlamada nacional");
            printf("\nCuanto duro la llamada ");
            scanf("%d",&min);
            if(min<=3)
            {
                sub=min*7;
            }
            else
            {
                sub=21+((min-3)*2);
            }
        }
        else
        {
            if(opc==3)
            {
                printf("\nLlamada internacional");
                printf("\nCuanto duro la llamada? ");
                scanf("%d",&min);
                if(min<=2)
                {
                    sub=min*9;
                }
                else
                {
                    sub=18+((min-2)*4);
                }
            }
            else
            {
                printf("\nEsa opcion no es valida");
                return 0;
            }
        }
    }

    iva=sub*.16;
    tt=sub+iva;
    printf("\nRecibo de pago");
    printf("\nSubtotal-------%f",sub);
    printf("\nIva------------%f",iva);
    printf("\nTotal----------%f",tt);
}    
