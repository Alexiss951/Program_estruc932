//Sanchez Santos B. Alexis 367714
//30/agosto/2023
//CONVERSIONES DE MEDIDAS
//MEDIDAS 2
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int opc;
    float cant, conv;
    printf("Elige una opcion");
    printf("\n1---------de cm a pulgadas");
    printf("\n2-------------de cm a pies");
    printf("\n3-------------de Km a pies");
    printf("\n4---------de pulgadas a cm");
    printf("\n5-------------de pies a cm");
    printf("\n6-----------de millas a Km ");
    scanf("%d",&opc);

    if(opc==1)
    {
        printf("\nCm a pulgadas, ingresa la cantidad en centimetros ");
        scanf("%f",&cant);
        conv=cant/2.54;
    }
    else
    {
        if(opc==2)
        {
            printf("\nCm a pies, ingresa la cantidad en centimetros ");
            scanf("%f",&cant);
            conv=cant/30.48;
        }
        else
        {
            if(opc==3)
            {
                printf("\nKm a pies, ingresa la cantidad en kilmetros ");
                scanf("%f",&cant);
                conv=cant*3281;
            }
            else
            {
                if(opc==4)
                {
                    printf("\nPulgadas a centimetros, ingresa la cantidad en pulgadas ");
                    scanf("%f",&cant);
                    conv=cant*2.54;
                }    
                else
                {
                    if(opc==5)
                    {
                        printf("\nPies a centimetros, ingresa la cantidad en Pies ");
                        scanf("%f",&cant);
                        conv=cant*30.48;
                    }
                    else
                    {
                        if(opc==6)
                        {
                            printf("\nDE millas a kilometros, ingresa la cantidad en millas ");
                            scanf("%f",&cant);
                            conv=cant*1.609;
                        }
                        else
                        {
                            printf("\nError, esa opcion no es valida");
                            return 0;
                        }
                    }
                }
            }
        }
    }
    printf("\nEl resultado de la conversion es %f",conv);

    return 0;
}
