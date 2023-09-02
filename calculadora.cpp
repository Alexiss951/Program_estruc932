//Sanchez Santos B. Alexis 367714
//30/agosto/2023
//HACER UN PROGRAMA QUE SE CAPAZ DE HACER LAS 4 OPERACIONES ARITMETICAS
//CALCULADORA 1
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1, num2, opc, res;
    printf("Elige una opcion");
    printf("\n1---------sumar");
    printf("\n2--------restar");
    printf("\n3-------dividir");
    printf("\n4---multiplicar ");
    scanf("%d",&opc);

    if(opc==1)
    {
        printf("\nSuma, ingresa el primer numero ");
        scanf("%d",&num1);
        printf("\nIngresa el segundo numero ");
        scanf("%d",&num2);
        res=num1+num2;
    }
    else
    {
        if(opc==2)
        {
            printf("\nResta, ingresa el primer numero ");
            scanf("%d",&num1);
            printf("\nIngresa el segundo numero ");
            scanf("%d",&num2);
            res=num1-num2;
        }
        else
        {
            if(opc==3)
            {
                printf("\nDividir, ingresa el primer numero ");
                scanf("%d",&num1);
                printf("\nIngresa el segundo numero ");
                scanf("%d",&num2);
                res=num1/num2;
            }
            else
            {
                if(opc==4)
                {
                    printf("\nMultiplicar, ingresa el primer numero ");
                    scanf("%d",&num1);
                    printf("\nIngresa el segundo numero ");
                    scanf("%d",&num2);
                    res=num1*num2;
                }
                else
                {
                    printf("\nError esa opcion no es valida");
                    return 0;
                }
            }
        }
    }

    printf("\nEl resultado de la operacion es %d",res);

    return 0;
}