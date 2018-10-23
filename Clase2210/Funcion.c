#include <stdio.h>
#include <stdlib.h>
#include "Funcion.h"








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
    system("cls");
    printf("Codigo\tMarca\tCapacidad\tPrecio\n");
    printf("%4d   %10s  %4d     %6.2f\n", pen->codigo, pen->marca, pen->capacidad, pen->precio);
    printf("\n\n");
}
