#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funcion.h"

ePendrive* new_pendrive()
{
    ePendrive p;

    p = (ePendrive*) malloc(sizeof(ePendrive));

    if(p != NULL)
    {
        p->codigo = 0;
        strcpy(p, "");
        p->capacidad = 0;
        p->precio = 0;
    }

    return p;

}


int cargarPendrive(ePendrive* pen)
{
    int todoOk = 0;

    if(pen != NULL)
    {
        printf("Ingrese Codigo: ");
        scanf("%d", &pen->codigo);

        printf("Ingrese Marca: ");
        fflush(stdin);
        gets(pen->marca);

        printf("Ingrese Capacidad: ");
        scanf("%d", &pen->capacidad);

        printf("Ingrese Precio: ");
        scanf("%f", &pen->precio);

        todoOk = 1;
    }

    return todoOk;
}




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
