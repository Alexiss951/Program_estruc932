//Sanchez Santos B. Alexis 367714
//30/agosto/2023
//CALCULAR EL NUMERO MAYOR DE 6
//MAYOR DE 6 3
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1, num2, num3, num4, num5, num6, may1, may2;
    printf("Numero mayor");
    printf("\nPrimer numero ");
    scanf("%d",&num1);
    printf("\nSegundo numero ");
    scanf("%d",&num2);
    printf("\nTercer numero ");
    scanf("%d",&num3);
    printf("\nCuarto numero ");
    scanf("%d",&num4);
    printf("\nQuinto numero ");
    scanf("%d",&num5);
    printf("\nsexto numero ");
    scanf("%d",&num6);

    if(num1>num2)
    {
        if(num1>num3)
        {
            may1=num1;
        }
        else
        {
            may1=num3;
        }
    }
    else
    {
        if(num2>num3)
        {
            may1=num2;
        }
        else
        {
            may1=num3;
        }
    }

    if(num4>num5)
    {
        if(num4>num6)
        {
            may2=num4;
        }
        else
        {
            may2=num6;
        }
    }
    else
    {
        if(num5>num6)
        {
            may2=num5;
        }
        else
        {
            may2=num6;
        }
    }

    if(may1>may2)
    {
        printf("\nEl mayor es el numero %d",may1);
    }
    else
    {
        printf("\nEl mayor es el numero %d",may2);
    }

    return 0;
}