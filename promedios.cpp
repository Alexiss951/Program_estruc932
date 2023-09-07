//Sanchez Santos B. Alexis 367714
//07/Septiembre/2023
//SACAR EL PROMEDIO EN BASE A TRES CALIFICACIONES
//PROMEDIO
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int cal, i;
    float prom, promf;
    prom=0;
    

    for(i=1;i<4;i++)
    {
        printf("\nDame la calificacion %d ",i);
        scanf("%d",&cal);

        prom=prom+cal;
        
    }
    promf=prom/3;

    if(promf>=80)
    {
        if(promf<90)
        {
            printf("\nBien, promedio de %f", promf);
        }
        else
        {
            if(promf<98)
            {
                printf("\nMuy bien, promedio de %f", promf);
            }
            else
            {
                if(promf<=100)
                {
                    printf("\nExelente, promedio de %f", promf);
                }
                else
                {
                    printf("\nError, el promedio no puede ser mayor a 100");
                }
            }
        }
    }
    else
    {
        if(promf>=70)
        {
            printf("\nRegular, promedio de %f", promf);
        }
        else
        {
            if(promf>=60)
            {
                printf("\nSuficiente, promedio de %f", promf);
            }
            else
            {
                if(promf>=30)
                {
                    printf("\nExtraordinario, promedio de %f", promf);
                }
                else
                {
                    printf("\nRepetir semestre");
                }
            }
        }
    }

    return 0;

}