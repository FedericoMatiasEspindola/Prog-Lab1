
typedef struct
{
    int legajo;
    char nombre[30];
    float promedio;
    int edad;
}sAlumno;



void mostrarUnAlumno(sAlumno);
sAlumno pedirAlumno();
void cargarListadoDeAlumnos(sAlumno [], int );
void mostrarListadoDeAlumnos(sAlumno [], int );
void ordenarListadoDeAlumnosPorNombres(sAlumno [], int );
