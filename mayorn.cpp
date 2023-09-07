//Sanchez Santos B. Alexis 367714
//07/Septiembre/2023
//CRAR UN PROGRAMA QUE PIDA TRES NUMERO Y DIGA CUAL ES EL MAYOR
//NUMERO MAYOR
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1, num2, num3;

    printf("\nPrimer numero ");
    scanf("%d",&num1);
    printf("\nSegundo numero ");
    scanf("%d",&num2);
    printf("\nTercer numero ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
    {
        printf("\nEl mayor es el %d",num1);
    }
    else
    {
        if(num2>num1 && num2>num3)
        {
            printf("\nEl mayor es el %d",num2);
        }
        else
        {
            printf("\nEl mayor es el %d", num3);
        }

        return 0;
        
    }
}