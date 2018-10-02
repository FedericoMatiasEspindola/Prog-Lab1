#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define TAM 10
#include "Funcion.h"


int main()
{

    char seguir = 's';

    eSector sectores[]=
    {
        {1, "RRHH"},
        {2, "VENTAS"},
        {3, "COMPRAS"},
        {4, "CONTABLE"},
        {5, "SISTEMAS"}
    };



    eEmpleado empleados[TAM];
    inicializarEmpleados(empleados,TAM);
    harcodearEmpleados(empleados);

    do
    {
        switch(menu())
        {
        case 1:
            altaEmpleado(empleados, TAM, sectores, 5);
            break;
        case 2:
            bajaEmpleado(empleados,TAM);
            break;
        case 3:
            modificarEmpleado(empleados, TAM);
            break;
        case 4:
            mostrarEmpleados(empleados, TAM, sectores, 5);
            break;
        case 5:
            ordenarEmpleadosXlegajo(empleados, TAM);
            break;
        case 6:
            printf("Mostrar por sector");
            //mostrarEmpleadosSector(empleados, TAM, sectores, 5);
        case 7:
            printf("Ordenar por sector y nombre");
        case 9:
            seguir = 'n';
            break;
        }
    }
    while(seguir == 's');

    return 0;
}
