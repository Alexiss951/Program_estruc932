//Sanchez Santos B. Alexis 367714
//30/agosto/2023
//CALCULAR EL RECIBO DEL AGUA EN BASE A LO CONSUMIDO
//CESPE 6
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int mtc;
    float tt, sub, iva;
    printf("Cuantos metros cubicos utilizo? ");
    scanf("%d",&mtc);

    if(mtc>=0 && mtc<=4)
    {
        sub=50;
    }
    else
    {
        if(mtc>=5 && mtc<=15)
        {
            sub=50+((mtc-4)*8);
        }
        else
        {
            if(mtc>=16 && mtc<=50)
            {
                sub=138+((mtc-15)*10);
            }
            else
            {
                if(mtc>=51)
                {
                    sub=488+((mtc-50)*11);
                }
                else
                {
                    printf("\nLa cantidad de metros cubicos debe ser mayor a 0");
                    return 0;
                }
            }
        }
    }
    iva=sub*.16;
    tt=iva+sub;
    printf("\nRecibo de pago");
    printf("\nSubtotal-------%f",sub);
    printf("\nIva------------%f",iva);
    printf("\nTotal----------%f",tt);
    return 0;
}