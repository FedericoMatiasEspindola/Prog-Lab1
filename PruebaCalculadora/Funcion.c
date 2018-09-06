#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "Funcion.h"

int menuPrincipal()
{
    char seguir='S';
    float numberOne=0, numberTwo=0,resultSuma,resultResta,resultMultiplicacion,resultDivision;
    unsigned long int resultFacA, resultFacB;
    int opcion,opcion2;

    do
    {
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
        printf("\t%c MENU CALCULADORA %c\n",186,186);
        printf("\t%c ESPINDOLA MATIAS %c\n",186,186);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
        printf("1%cIngrese 1er Operando (A=%.2f)\n",250,numberOne);
        printf("2%cIngrese 2do Operando (B=%.2f)\n\n",250,numberTwo);
        printf("3%cCalcular Todas Las Operaciones\n\n",250);
        printf("   1%cSuma (A+B)\n",250);
        printf("   2%cResta (A-B)\n",250);
        printf("   3%cDivision (A/B)\n",250);
        printf("   4%cMultiplicacion (A*B)\n",250);
        printf("   5%cFactorial (A! & B!)\n\n",250);
        printf("4%cMostrar Resultado De Todas Las Operaciones Anteriores\n\n",250);
        printf("5%cSalir\n\n",250);
        printf("%c Opcion Elegida: ", 254);
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("\n%c Ingrese Primer Operando: ",254);
            fflush(stdin);
            scanf("%f",&numberOne);
            system("cls");
            break;

        case 2:
            printf("\n%c Ingrese Segundo Operando: ",254);
            fflush(stdin);
            scanf("%f",&numberTwo);
            system("cls");
            break;

        case 3:
            system("cls");
            subMenu();
            scanf("%d", &opcion2);
            switch(opcion2)
            {
                case 1:
                    resultSuma=suma(numberOne,numberTwo);
                    system("cls");
                    continue;
                case 2:
                    resultResta=resta(numberOne,numberTwo);
                    system("cls");
                    continue;
                case 3:
                    resultDivision=division(numberOne,numberTwo);
                    system("cls");
                    continue;
                case 4:
                    resultMultiplicacion=multiplicacion(numberOne,numberTwo);
                    system("cls");
                    continue;
                case 5:
                    resultFacA=factorial(numberOne);
                    resultFacB=factorial(numberTwo);
                    system("cls");
                    continue;
                case 6:
                    system("cls");
                    continue;
                default:
                system("cls");
                seguir=verificacionOpcion();
            }

            system("cls");
            break;
            /*system("cls");
            resultSuma=suma(numberOne,numberTwo);
            resultResta=resta(numberOne,numberTwo);
            resultMultiplicacion=multiplicacion(numberOne,numberTwo);
            resultDivision=division(numberOne,numberTwo);
            resultFacA=factorial(numberOne);
            resultFacB=factorial(numberTwo);
            printf("Se Calcularon Todas Las Operaciones Para A=%.2f Y B=%.2f\n\n",numberOne,numberTwo);
            system ("pause");
            system("cls");
            break;
            */

        case 4:

            system("cls");

            printf("\t Resultado De Todas Las Operaciones Para A=%.2f Y B=%.2f\n\n\n",numberOne,numberTwo);

            //Suma de numeros
            printf("El Resultado De (A+B) Es: %.2f\n\n", resultSuma);
            //RESTA
            printf("El Resultado De (A-B) Es: %.2f\n\n", resultResta);
            //Division de numeros
            if (numberTwo==0)
            {
                printf("%c No Se Puede Dividir Por Cero\n\n",158);
            }
            else
            {
                printf("El Resultado De (A/B) Es: %.2f\n\n", resultDivision);
            }
            //Multiplicacion de numeros
            printf("El Resultado De (A*B) Es: %.2f\n\n", resultMultiplicacion);
            //Factorial de A
            if (numberOne<1)
            {
                printf("%c El Factorial De |A| No Se Aplica Porque El Numero Es Menor A 1\n\n",158);
            }
            else if (numberOne>16)
            {
                printf("%c El Factorial De |A| No Se Aplica Porque Su Resultado Es Muy Grande, Maximo 16\n\n",158);
            }
            else
            {
                printf("El Resultado Del Factorial De |A| Es: %ld\n\n", resultFacA);
            }
            //Factorial B
            if (numberTwo<1)
            {
                printf("%c El Factorial De |B| No Se Aplica Porque El Numero Es Menor A 1\n\n\n",158);
            }
            else if (numberTwo>16)
            {
                printf("%c El Factorial De |B| No Se Aplica Porque Su Resultado Es Muy Grande, Maximo 16\n\n",158);
            }
            else
            {
                printf("El Resultado Del Factorial De |B| Es: %ld\n\n\n", resultFacB);
            }
            system("pause");
            system("cls");
            break;

        case 5:
            seguir = 'N';
            printf("\n\nCalculadora Terminada!\n");
            break;

        default:
            system("cls");
            seguir=verificacionOpcion();
        }
    }while(seguir=='S');

    return 0;
}



void subMenu(void)
{

    printf("3%cCalcular Todas Las Operaciones\n\n",250);
    printf("   1%cSuma (A+B)\n",250);
    printf("   2%cResta (A-B)\n",250);
    printf("   3%cDivision (A/B)\n",250);
    printf("   4%cMultiplicacion (A*B)\n",250);
    printf("   5%cFactorial (A! & B!)\n",250);
    printf("   6%cSalir\n\n",250);
    printf("%c Opcion Elegida: ", 254);

}







float suma (float a, float b)
{
    float resSuma;
    resSuma = a+b;
    return resSuma;
}

float resta (float a, float b)
{
    float resResta;

    resResta = a-b;
    return resResta;
}

float division (float a, float b)
{
    float resDivision;
    resDivision = (float)a/b;
    return(resDivision);
}

float multiplicacion(float a, float b)
{
    float resMult;
    resMult = a*b;
    return resMult;
}

unsigned long int factorial(int a)
{
    unsigned long int resultadoFactorial;
    while(a>=1)
    {
        if(a==1)
            return 1;
        resultadoFactorial=a* factorial(a-1);
        return (resultadoFactorial);
    }
    return 0;
}


char verificacionOpcion(void)
{
    char letra;
    printf("Opcion No Valida, Desea Continuar?...S/N?: ");
    letra=toupper(getche());
    while(!((letra=='S')||(letra=='N')))
    {
        printf("\nOpcion No Valida, Reingre (S/N) :");
        letra=toupper(getche());
    }
    system("cls");

    if (letra=='N')
    {
        printf("\n\nCalculadora Terminada!\n");
    }
    return (letra);
}
