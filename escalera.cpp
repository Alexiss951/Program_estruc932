//Sanchez Santos B. Alexis 367714
//07/Septiembre/2023
//CREAR UN PROGRAMA QUE PIDA TRES NUMEROS Y LOS DEVUELVA DE FORMA ASCENDENTE
//ESCALERA
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1, num2, num3, meno, mayo, med, n;

    printf("\nPrimer numero ");
    scanf("%d",&num1);
    meno=num1;
    n=1;
    printf("\nSegundo numero ");
    scanf("%d",&num2);
    if(num2<meno)
    {
        meno=num2;
        n=2;
    }
    printf("\nTercer numero ");
    scanf("%d",&num3);
    if(num3<meno)
    {
        meno=num3;
        n=3;
    }
    switch(n)
    {
        case 1:
        if(num2<num3)
        {
            printf("\nEl orden es este %d, %d, %d",num1, num2, num3);
        }
        else
        {
            printf("\nEl orden es este %d, %d, %d",num1, num3, num2);
        }
        break;
        case 2:
        if(num1<num3)
        {
            printf("\nEl orden es este %d, %d, %d",num2, num1, num3);
        }
        else
        {
            printf("\nEl orden es este %d, %d, %d",num2, num3, num1);
        }
        break;
        default:
        if(num1<num2)
        {
            printf("\nEl orden es este %d, %d, %d",num3, num1, num2);
        }
        else
        {
            printf("\nEl orden es este %d, %d, %d",num3, num2, num1);
        }
    }

   return 0;

}