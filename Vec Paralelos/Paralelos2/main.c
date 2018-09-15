#include <stdio.h>
#include <stdlib.h>
#define TAM 2
#include "Funcion.h"
#include <string.h>


int main()
{
    char nombres[TAM][20];
    int legajos[TAM];
    int pp[TAM];
    int sp[TAM];
    float promedios[TAM];
    char sexo[TAM];

    for(int i = 0; i<TAM; i++)
    {
        printf("Ingrese su Nombre: ");
        fflush(stdin);
        gets(nombres[i]);

        printf("Ingrese Legajo: ");
        scanf("%d", &legajos[i]);

        printf("Ingrese Nota Primer Parcial: ");
        scanf("%d", &pp[i]);

        printf("Ingrese Nota Segundo Parcial: ");
        scanf("%d", &sp[i]);

        printf("Ingrese F para Femenino o M para Masculino: ");
        fflush(stdin);
        scanf("%c", &sexo[i]);

        promedios[i]= (float) (pp[i]+sp[i]) / 2;

        system("cls");
    }


    //Muestra Normal
    printf("Nombre \t Legajo \t Nota PP \t Nota SP \t Promedio \t Sexo \n");

    for(int i = 0; i < TAM; i++)
    {
        printf("\n%s \t %d \t\t %d \t\t %d \t\t %.2f \t\t %c ", nombres[i], legajos[i], pp[i], sp[i], promedios[i], sexo[i]);
    }

    printf("\n\n");


    //Muestra Ordenado
    ordenar(nombres,legajos,pp,sp,promedios,sexo,TAM);
    printf("Ordenados por promedio mas alto: \n");
    printf("Nombre \t Legajo \t Nota PP \t Nota SP \t Promedio \t Sexo \n");

    for(int i = 0; i < TAM; i++)
    {

        printf("\n%s \t %d \t\t %d \t\t %d \t\t %.2f \t\t %c ", nombres[i], legajos[i], pp[i], sp[i], promedios[i], sexo[i]);
    }

    printf("\n\n");


    return 0;
}

