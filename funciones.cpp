//Sanchez Santos B. Alexis 367714
//07/Septiembre/2023
//PROGRAMAR 4 FUNCIONES CON DIFERENTES USOS
//FUNCIONES
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#define N 35

void menor(void);
void paoim(void);
void mayome(void);
void tabla(void);

int main()
{
    int opc, i, o;
    srand(time(NULL));
    i=0;
    do
    {
        printf("1---------Menor a un numero");
        printf("\n2--------------par o impar");
        printf("\n3------------Mayor y menor");
        printf("\n4-----tabla de multiplicar");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
            menor();
            break;
            case 2:
            paoim();
            break;
            case 3:
            mayome();
            break;
            case 4:
            tabla();
            break;
            default:
            printf("\nEsa opcion no existe");
        }
        printf("\nQuiere salir? (0 = no, 1=si) ");
        scanf("%d",&o);
        if(o==1)
        {
            i=1;
        }
    }while(i!=1);

    return 0;

}

void menor()
{
    int i, n, sec;
    system("CLS");
    printf("numero menores al que pongas");
    printf("\nPon un numero ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sec=n-i;
        printf("\n %d",sec);
    }
    system("PAUSE");
}

void paoim()
{
    int num, par, imp, sump, sumi, i;
    sump=0;
    sumi=0;
    system("CLS");
    printf("\n40 numeros aleatorios entre el 0 y el 200");
    for(i=0;i<40;i++)
    {
        num=(rand()%199)+1;
        if(num%2==0)
        {
            printf("\n %d es par", num);
            sump=sump+num;
        }
        else
        {
            printf("\n %d es impar",num);
            sumi=sumi+num;
        }
        
    }
    printf("\nAl sumar los pares obtenemos %d",sump);
    printf("\nAL sumar los impares obtenemos %d",sumi);
    system("PAUSE");
}

void mayome()
{
    int num, i, may, men;
    system("CLS");
    num=(rand()%101)+100;
    may=num;
    printf("%d",num);
    num=(rand()%101)+100;
    men=num;
    printf("\n%d",num);
    for(i=0;i<(N-2);i++)
    {
        num=(rand()%101)+100;
        printf("\n%d",num);
        if(num<men)
        {
            men=num;
        }
        if(num>may)
        {
            may=num;
        }
    }
    printf("\nEl numero mayor es %d",may);
    printf("\nEl numero menor es %d",men);
    system("PAUSE");
}

void tabla()
{
    int num, i, mult;
    system("CLS");
    printf("Que tabla quieres ver? ");
    scanf("%d",&num);
    for(i=1;i<21;i++)
    {
        mult=num*i;
        printf("\n%d. %d x %d = %d",i, num, i, mult);
    }
    system("PAUSE");
}