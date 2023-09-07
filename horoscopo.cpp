//Sanchez Santos B. Alexis 367714
//07/Septiembre/2023
//CREAR UN PROGRAMA QUE PIDA EL DIA Y MES DE NACIMIENTO Y DEVUELVA EL HOROSCOPO
//HOROSCOPO
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int mes, dia;
    printf("numero de mes de nacimiento (si es enero=1, febrero=2, etc) ");
    scanf("%d",&mes);
    switch(mes)
    {
        case 1:
        printf("\nDia de nacimiento ");
        scanf("%d",&dia);
        if(dia>=1 && dia<32)
        {
            printf("\nEres Capricornio y tu horoscopo dice...");
            printf("\nEs probable que hoy te surja la opcion de realizar un buen negocio. \nSi te sientes preparada, ¡adelante!. Si te llega la propuesta \nde un amigo o amiga para salir de la ciudad \nel proximo fin de semana, acepta. Te vendra muy bien cambiar de aires y hacer una actividad \ndistinta a la habitual");
        }
        else
        {
            if(dia>=20 && dia<32)
            {
                printf("\nEres Acuario y tu horoscopo dice...");
                printf("\nEl Universo te devolvera este favor desinteresado. \nEn el terreno amoroso, quiza habias imaginado que tu relacion seria \nsiempre como una balsa de aceite y cualquier pequeño contratiempo te que \nsurge a diario te parece un mundo. No hagas una montana de un granito de arena. \nPodeis superar la crisis facilmente.");
            }
            else
            {
                printf("\nEnero solo tiene 31 dias");
            }
        }
        break;
        case 2:
        printf("\nDia de nacimientos ");
        scanf("%d",&dia);
        if(dia>=1 && dia<19)
        {
            printf("\nEres Acuario y tu horoscopo dice...");
            printf("\nEl Universo te devolvera este favor desinteresado.  \nEn el terreno amoroso, quiza habias imaginado que tu relacion seria  \nsiempre como una balsa de aceite y cualquier pequeno contratiempo te que \nsurge a diario te parece un mundo. No hagas una montana de un granito de arena. \nPodeis superar la crisis facilmente.");
        }
        else
        {
            if(dia>=19 && dia<29)
            {
                printf("\nEres Picis y tu horoscopo dice...");
                printf("\nUna buena oportunidad la tienes justo al lado, \nabre los ojos y date cuenta de las posibilidades que tienes a tu alcance \nEvita hoy todo tipo de discusiones porque saldrias perdiendo aun teniendo la razon. \nEstas en un buen momento para el amor. Dejate querer por esta persona especial que esta a \ntu lado desde hace un tiempo.");
            }
            else
            {
                printf("\nFebrero solo tiene 29 dias (cada 4 años al menos)");
            }
        }
        break;
        case 3:
        printf("\nDia de nacimientos ");
        scanf("%d",&dia);
        if(dia>=1 && dia<21)
        {
            printf("\nEres Picis y tu horoscopo dice...");
            printf("\nUna buena oportunidad la tienes justo al lado, \nabre los ojos y date cuenta de las posibilidades que tienes a tu alcance. \nEvita hoy todo tipo de discusiones porque saldrias perdiendo aun teniendo la razon. \nEstas en un buen momento para el amor. Dejate querer por esta persona especial que esta a \ntu lado desde hace un tiempo.");
        }
        else
        {
            if(dia>=21 && dia<32)
            {
                printf("\nEres Aries y tu horoscopo dice...");
                printf("\nTu economia no atraviesa su mejor momento, preocupada Aries.\nSi hoy te salen gastos y no dispones de recursos suficientes, \nprueba a vender via online alguna cosa que ya no utilices, como por ejemplo \ntus viejos patines o ese mueble que siempre has querido eliminar. Hoy tendras suerte en este tipo de mercado. \nEs importante tambien que a diario no te agobies ante los problemas porque tu preocupacion no los resolvera");
            }
            else
            {
                printf("\nMarzo solo tiene 31 dias");
            }
        }
        break;
        case 4:
        printf("\nDia de nacimiento ");
        scanf("%d", &dia);
        if(dia>=1 && dia<20)
        {
            printf("\nEres Aries y tu horoscopo dice...");
            printf("\nTu economia no atraviesa su mejor momento, preocupada Aries.  \nSi hoy te salen gastos y no dispones de recursos suficientes, \nprueba a vender via online alguna cosa que ya no utilices, como por ejemplo \ntus viejos patines o ese mueble que siempre has querido eliminar. Hoy tendras suerte en este tipo de mercado. \nEs importante tambien que a diario no te agobies ante los problemas porque tu preocupacion no los resolvera");
        }
        else
        {
            if(dia>19 && dia<=30)
            {
                printf("\nEres Tauro y tu horoscopo dice...");
                printf("\nHoy tambien te puede llegar la respuesta a una duda que te planteas desde hace tiempo, \nindecisa Tauro. Haz lo que te dicte tu voz interior. Si estas saliendo con alguien a diario, \npuedes reparar hoy en que no congenias tanto como pensabas al principio. Dale tiempo.");
            }
            else
            {
                printf("\nAbril solo tiene 30 dias");
            }
        }
        break;
        case 5:
        printf("\nDia de nacimiento ");
        scanf("%d",&dia);
        if(dia>=1 && dia<21)
        {
            printf("\nEres Tauro y tu horoscopo dice...");
            printf("\nHoy tambien te puede llegar la respuesta a una duda que te planteas desde hace tiempo, \nindecisa Tauro. Haz lo que te dicte tu voz interior. Si estás saliendo con alguien a diario, \npuedes reparar hoy en que no congenias tanto como pensabas al principio. Dale tiempo.");
        }
        else
        {
            if(dia>=21 && dia<32)
            {
                printf("\nEres Geminis y tu horoscopo dice...");
                printf("\nTe sera mas facil de lo que parece. En el futuro podria ayudarte a equilibrar tu economia. \nY aleja esa tendencia que tienes a diario a dejar las cosas para mas adelante, Geminis. En especial \nen el ambito sentimental, si te sientes atraida por alguien, toma hoy la iniciativa para propiciar \nun encuentro o una cita");
            }
            else
            {
                printf("\nMayo solo tiene 31 dias");
            }
        }
        break;
        case 6:
        printf("\nDia de nacimiento ");
        scanf("%d",&dia);
        if(dia>=1 && dia<21)
        {
            printf("\nEres Geminis y tu horoscopo dice...");
            printf("\nTe sera mas facil de lo que parece. En el futuro podria ayudarte a equilibrar tu economia. \nY aleja esa tendencia que tienes a diario a dejar las cosas para mas adelante, Geminis. En especial \nen el ambito sentimental, si te sientes atraida por alguien, toma hoy la iniciativa para propiciar \nun encuentro o una cita");
        }
        else
        {
            if(dia>=21 && dia<30)
            {
                printf("\nEres Cancer y tu horoscopo dice...");
                printf("\nEn el ambito sentimental, si tienes pareja hoy puede sorprenderte mucho con un detalle \nque no te imaginas y que te puede llegar a emocionar. Y si estás libre sentimentalmente, Cancer, \nte conviene salir a diario y conocer gente nueva. Si hoy surge alguien que demuestra interés en ti, \ndale una oportunidad, procura conocerle mejor. Tal vez se trata de tu alma gemela.");
            }
            else
            {
                printf("\nJunio solo tiene 30 dias");
            }
        }
        break;
        case 7:
        printf("\nDia de nacimiento ");
        scanf("%d",&dia);
        if(dia>=1 && dia<23)
        {
            printf("\nEres Cancer y tu horoscopo dice...");
            printf("\nEn el ambito sentimental, si tienes pareja hoy puede sorprenderte mucho con un detalle \nque no te imaginas y que te puede llegar a emocionar. Y si estas libre sentimentalmente, Cancer, \nte conviene salir a diario y conocer gente nueva. Si hoy surge alguien que demuestra interes en ti, \ndale una oportunidad, procura conocerle mejor. Tal vez se trata de tu alma gemela.");
        }
        else
        {
            if(dia>=23 && dia<32)
            {
                printf("\nEres Leo y tu horoscopo dice...");
                printf("\nHoy puedes aprender mucho de este dia laboralmente complicado, luchadora Leo. \nEn el amor, si sabes que hay alguien pendiente de ti a diario pero que no se atreve a abordarte, \nno dejes pasar el dia de hoy sin proponerle tu un encuentro.No esperes que sea el quien se decida a dar el paso, \nconsulta tu horoscopo del amor y veras como avanzas.");
            }
            else
            {
                printf("\nJulio solo tiene 31 dias");
            }
        }
        break;
        case 8:
        printf("\nDia de nacimiento ");
        scanf("%d",&dia);
        if(dia>=1 && dia<23)
        {
            printf("\nEres Leo y tu horoscopo dice...");
            printf("\nHoy puedes aprender mucho de este dia laboralmente complicado, luchadora Leo. \nEn el amor, si sabes que hay alguien pendiente de ti a diario pero que no se atreve a abordarte, \nno dejes pasar el dia de hoy sin proponerle tu un encuentro.No esperes que sea el quien se decida a dar el paso, \nconsulta tu horoscopo del amor y veras como avanzas.");
        }
        else
        {
            if(dia>=23 && dia<32)
            {
                printf("\nEres Virgo y tu horoscopo dice...");
                printf("\nCuesta muy poco hacer feliz a quienes quieres y a ti te ayudara a sentirte mejor. En el amor, \nsi has salido hace poco de una relacion conflictiva, Virgo, no hagas caso a un mensaje de esta persona que \nte puede llegar hoy mismo. Conserva la libertad que tienes ahora y disfruta de ella, no necesitas volverte a \ncomplicar la vida con una persona toxica.");
            }
            else
            {
                printf("\nAgosto solo tiene 31 dias");
            }
        }
        break;
        case 9:
        printf("\nDia de nacimiento ");
        scanf("%d",&dia);
        if(dia>=1 && dia<23)
        {
            printf("\nEres Virgo y tu horoscopo dice...");
            printf("\nCuesta muy poco hacer feliz a quienes quieres y a ti te ayudara a sentirte mejor. En el amor, \nsi has salido hace poco de una relacion conflictiva, Virgo, no hagas caso a un mensaje de esta persona que \nte puede llegar hoy mismo. Conserva la libertad que tienes ahora y disfruta de ella, no necesitas volverte a \ncomplicar la vida con una persona toxica.");
        }
        else
        {
            if(dia>=23 && dia<31)
            {
                printf("\nEres Libra y tu horoscopo dice..");
                printf("\nEn el amor, puede que estes viviendo un momento delicado con una persona que a diario te toma por \nel pito del sereno. Eres muy condescendiente, tal vez demasiado, y en ocasiones hay que ser mas exigente, \npaciente Aries. Si tienes la impresion hoy de que alguien te toma el pelo, no lo permitas. Corta con esta situacion. \nSaca tu caracter a relucir.");
            }
            else
            {
                printf("\nSeptiembre solo tiene 30 dias");
            }
        }
        break;
        case 10:
        printf("\nDia de nacimiento ");
        scanf("%d",&dia);
        if(dia>=1 && dia<23)
        {
            printf("\nEres Libra y tu horoscopo dice..");
            printf("\nEn el amor, puede que estes viviendo un momento delicado con una persona que a diario te toma por \nel pito del sereno. Eres muy condescendiente, tal vez demasiado, y en ocasiones hay que ser mas exigente, \npaciente Aries. Si tienes la impresion hoy de que alguien te toma el pelo, no lo permitas. Corta con esta situacion. \nSaca tu caracter a relucir.");
        }
        else
        {
            if(dia>=23 && dia<32)
            {
                printf("\nEres Escorpio y tu horoscopo dice..");
                printf("\nHoy puede que conozcas a alguien importante en tu medio profesional, Escorpio. \nPodria ayudarte a progresar  pero no parece estar por la labor. Espera un poco, lo hara más adelante. Mientras, \nesfuerzate a diario por cumplir con tu cometido.");
            }
            else
            {
                printf("\nOctubre solo tiene 31 dias");
            }
        }
        break;
        case 11:
        printf("\nDia de nacimiento ");
        scanf("%d",&dia);
        if(dia>=1 && dia<22)
        {
            printf("\nEres Escorpio y tu horoscopo dice..");
            printf("\nHoy puede que conozcas a alguien importante en tu medio profesional, Escorpio. \nPodria ayudarte a progresar  pero no parece estar por la labor. Espera un poco, lo hara más adelante. Mientras, \nesfuerzate a diario por cumplir con tu cometido.");
        }
        else
        {
            if(dia>=22 && dia<31)
            {
                printf("\nEres Sagitario y tu horoscopo dice..");
                printf("\nUna persona de tu circulo de amistades te esta enviando mensajes e intenta hablar contigo a diario. \nPor cansada que estes y por mucho palo que te de, responde a sus llamadas, Sagitario. Puedes ayudarle mucho \ny se trata de una amistad muy valiosa que deberias conservar a toda costa");
            }
            else
            {
                printf("\nNoviembre solo tiene 30 dias");
            }
        }
        break;
        case 12:
        printf("\nDia de nacimiento ");
        scanf("%d",&dia);
        if(dia>=1 && dia<22)
        {
            printf("\nEres Sagitario y tu horoscopo dice..");
            printf("\nUna persona de tu circulo de amistades te esta enviando mensajes e intenta hablar contigo a diario. \nPor cansada que estes y por mucho palo que te de, responde a sus llamadas, Sagitario. Puedes ayudarle mucho \ny se trata de una amistad muy valiosa que deberias conservar a toda costa");
        }
        else
        {
            if(dia>=22 && dia<32)
            {
                printf("\nEres Capricornio y tu horoscopo dice...");
                printf("\nEs probable que hoy te surja la opcion de realizar un buen negocio. \nSi te sientes preparada, ¡adelante!. Si te llega la propuesta \nde un amigo o amiga para salir de la ciudad \nel proximo fin de semana, acepta. Te vendra muy bien cambiar de aires y hacer una actividad \ndistinta a la habitual");
            }
            else
            {
                printf("\nDiciembre solo tiene 31 dias");
            }
        }
        default:
        printf("\nEL ano solo tiene 12 meses");
    }

    return 0;

}