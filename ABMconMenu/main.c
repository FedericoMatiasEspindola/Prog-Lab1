#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define TAM 3
#include "Funcion.h"


int main()
{
    char seguir = 's';
    eEmpleado empleados[TAM];
    inicializarEmpleados(empleados, TAM);


    do
    {
        switch(menu())
        {

        case 1:
            altaEmpleado(empleados, TAM);
            break;
        case 2:
            bajaEmpleado(empleados, TAM);
            break;
        case 3:
            modificaEmpleado(empleados, TAM);
            break;
        case 4:
            mostrarEmpleados(empleados, TAM);
            break;
        case 5:
            printf("\nORDENAR\n\n");
            system("pause");
            break;
        case 6:
            seguir = 'n';
            break;
        default:
            printf("\nOpcion Incorrecta\n\n");
            system("pause");
        }
    }
    while(seguir != 'n');

    return 0;
}


