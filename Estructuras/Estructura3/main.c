#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"
#define A 2


int main()
{

    sAlumno listadoMain[A];

    cargarListadoDeAlumnos(listadoMain, A);

    mostrarListadoDeAlumnos(listadoMain, A);

    printf("Ordenado: \n");

    ordenarListadoDeAlumnosPorNombres(listadoMain, A);

    mostrarListadoDeAlumnos(listadoMain, A);

    return 0;
}


