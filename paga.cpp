//Sanchez Santos B. Alexis 367714
//30/agosto/2023
//CALCULAR LA NOMINA DE UN EMPLEADO
//NOMIMA 4
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int jn, sln, ht, slxh, slx, st;
    slx=0;
    jn=40;
    printf("Cuanto es el salario por hora? ");
    scanf("%d",&slxh);
    printf("\nCuantas horas trabajo el empleado? ");
    scanf("%d",&ht);
    
    if(ht<41)
    {
        sln=ht*slxh;
    }
    else
    {
        if(ht<50)
        {
            sln=jn*slxh;
            slx=(ht-jn)*slxh*2;
        }
        else
        {
            sln=jn*slxh;
            slx=((ht-(jn+9))*3*slxh)+(18*slxh);
        }
    }
    st=sln+slx;

    printf("\nNomina");
    printf("\nSalario por hora------%d",slxh);
    printf("\nHoras trabajadas------%d",ht);
    printf("\nSalario normal--------%d",sln);
    printf("\nSalario extra---------%d",slx);
    printf("\nSalario total---------%d",st);

    return 0;
    
}