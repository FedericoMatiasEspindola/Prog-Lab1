#include <stdio.h>
#include <stdlib.h>
#include "Funcion.h"


void mostrarPendrive(ePendrive* pen)
{
    if(pen != NULL)
    {
        system("cls");
        printf("Codigo\tMarca\tCapacidad\tPrecio\n");
        printf("%4d   %10s  %4d     %6.2f\n", pen->codigo, pen->marca, pen->capacidad, pen->precio);
        printf("\n\n");
    }

}


ePendrive* new_pendrive()
{
    ePendrive p;

    p = (ePendrive*) calloc(1, sizeof(ePendrive));



    return p;

}

ePendrive* new_pendriveParam(int codigo, char* marca, int capacidad, float precio)
{

    ePendrive p;
    p = (ePendrive*) malloc(sizeof(ePendrive));

    if(p != NULL)
    {
        p->codigo = codigo;
        strcpy(p->marca, marca);
        p->capacidad = capacidad;
        p->precio = precio;
    }

}
