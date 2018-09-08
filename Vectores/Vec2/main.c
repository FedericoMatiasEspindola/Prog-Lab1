#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Funcion.h"
#define TAM 5


int main()
{
    int vec[TAM];
    char seguir;
    int indice;



    for(int i=0;i<TAM;i++)
    {
        vec[i]=0;
    }

    do{
        system("cls");
        printf("\nIngrese indice: ");
        scanf("%d", &indice);

        while( !validarRango(indice, 0, 4))
        {
            printf("\nError, Reingrese indice: ");
            scanf("%d", &indice);
            system("cls");
        }

            printf("\nIngrese un numero: ");
            scanf("%d", &vec[indice]);

        system("cls");
        printf("\nDesea Continuar? ");
        fflush(stdin);
        scanf("%c", &seguir);
        seguir=tolower(seguir);
    }while(seguir=='s');

    system("cls");
    printf("\nNumeros en los indices elegidos: \n");
    mostrarVector(vec, TAM);
    ordenar(vec, TAM);
    printf("\nNumeros ordenados Menor a Mayor: \n");
    mostrarVector(vec, TAM);
    ordenar2(vec, TAM);
    printf("\nNumeros ordenados Mayor a Menor: \n");
    mostrarVector(vec, TAM);


    return 0;
}



