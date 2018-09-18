#include <stdio.h>
#include <stdlib.h>
#define A 3


typedef struct
{
    int legajo;
    char nombre[30];
    float promedio;
    int edad;
}sAlumno;


void mostrarUnAlumno(sAlumno);


int main()
{

    sAlumno listadoMain[A];
    int i;

    for(i=0;i<A;i++)
    {
        printf("Ingrese Legajo: ");
        scanf("%d", &listadoMain[i].legajo);
        system("cls");
        printf("Ingrese Nombre: ");
        fflush(stdin);
        gets(listadoMain[i].nombre);
        system("cls");
        printf("Ingrese Promedio: ");
        scanf("%f", &listadoMain[i].promedio);
        system("cls");
        printf("Ingrese Edad: ");
        scanf("%d",&listadoMain[i].edad);
        system("cls");
    }

    for(i=0;i<A;i++)
    {
        mostrarUnAlumno(listadoMain[i]);
    }
    return 0;
}


void mostrarUnAlumno(sAlumno miAlumno)
{
    printf("%d\t\t%s\t\t%.2f\t\t%d\n\n", miAlumno.legajo, miAlumno.nombre, miAlumno.promedio, miAlumno.edad);
}



