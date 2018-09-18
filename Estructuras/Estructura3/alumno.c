#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"

void mostrarUnAlumno(sAlumno miAlumno)
{
    printf("%d\t\t%s\t\t%.2f\t\t%d\n\n", miAlumno.legajo, miAlumno.nombre, miAlumno.promedio, miAlumno.edad);
}


sAlumno pedirAlumno()
{
    sAlumno alumnito;

    printf("Ingrese Legajo: ");
    scanf("%d", &alumnito.legajo);
    system("cls");
    printf("Ingrese Nombre: ");
    fflush(stdin);
    gets(alumnito.nombre);
    system("cls");
    printf("Ingrese Promedio: ");
    scanf("%f", &alumnito.promedio);
    system("cls");
    printf("Ingrese Edad: ");
    scanf("%d", &alumnito.edad);
    system("cls");

    return alumnito;
}


void cargarListadoDeAlumnos(sAlumno listado[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        listado[i]=pedirAlumno();
    }
}

void mostrarListadoDeAlumnos(sAlumno listado[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        mostrarUnAlumno(listado[i]);
    }
}


void ordenarListadoDeAlumnosPorNombres(sAlumno listado[], int tam)
{

    sAlumno auxAlumno;
    int i;
    int j;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(strcmp(listado[i].nombre, listado[j].nombre) >0)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;
            }
        }
    }





}





/*COMO NO ORDENAR LA ARRAY
void ordenarListadoDeAlumnos(sAlumno listado[], int tam)
{
    int auxInt;
    char auxString[50];
    float auxFloat;
    int i;
    int j;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(strcmp(listado[i].nombre, listado[j].nombre) >0)
            {
                auxInt = listado[i].legajo;
                listado[i].legajo = listado[j].legajo;
                listado[j].legajo = auxInt;


            }
        }
    }
}
*/
