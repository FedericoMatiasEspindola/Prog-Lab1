#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int legajo;
    char nombre[30];
    float promedio;
    int edad;
}sAlumno;


void mostrarUnAlumno(sAlumno);

sAlumno pedirAlumno();


int main()
{
    sAlumno miAlumno;   //={105,"Juan",4.65};

    // sAlumno otroAlumno;
    //otroAlumno=miAlumno;

    miAlumno=pedirAlumno();

    mostrarUnAlumno(miAlumno);

    return 0;
}


void mostrarUnAlumno(sAlumno miAlumno)
{
    printf("Alumno 1\n");
    printf("%d\t%s\t%.2f\t%d\n\n", miAlumno.legajo, miAlumno.nombre, miAlumno.promedio, miAlumno.edad);
    /*printf("Alumno 2\n");
    printf("%d\t%s\t%.2f\n", otroAlumno.legajo, otroAlumno.nombre, otroAlumno.promedio);
    printf("\n\n");*/
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
