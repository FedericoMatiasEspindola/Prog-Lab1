#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define TAM 10
#include "Funcion.h"


int main()
{

    char seguir = 's';
    int idAlmuerzo = 1000;

    eSector sectores[5];
    cargarSectores(sectores);

    eComida comidas[5];
    cargarComidas(comidas);

    eAlmuerzo almuerzos[20];

    eEmpleado empleados[TAM];

    inicializarEmpleados(empleados,TAM);

    inicializarAlmuerzo(almuerzos, 20);

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
            break;
        case 7:
            printf("Ordenar por sector y nombre");
            break;
        case 8:
            printf(" 8- Listar Empleados con mas Ganancias\n");
            break;
        case 9:
            listarComidas(comidas, 5);
            system("pause");
            break;
        case 10:
            altaAlmuerzo(almuerzos, 20, comidas, 5, empleados, TAM, sectores, 5, &idAlmuerzo);

            break;
        case 20:
            seguir = 'n';
            break;
        }
    }
    while(seguir == 's');

    return 0;
}
