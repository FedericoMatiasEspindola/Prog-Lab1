typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int idSector;
    int isEmpty;
} eEmpleado;

//Clase Prog 5/10
typedef struct
{
    int id;
    char descripcion[20];
}eSector;

typedef struct
{
    int id;
    char descripcion[20];
}eComida;

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int id;
    int idComida;
    int idEmp;
    eFecha fecha;
    int isEmpty;
}eAlmuerzo;
//Clase Prog

int menu();

void inicializarEmpleados(eEmpleado lista[], int tam);

int buscarLibre(eEmpleado lista[], int tam);

int buscarEmpleado(eEmpleado lista[], int tam, int legajo);

void altaEmpleado(eEmpleado lista[], int tam, eSector sectores[], int tamSector);

void bajaEmpleado(eEmpleado lista[], int tam);

void modificarEmpleado(eEmpleado lista[], int tam);

void ordenarEmpleadosXlegajo(eEmpleado lista[], int tam);

void mostrarEmpleado(eEmpleado unEmpleado, eSector sectores[], int tam);

void mostrarEmpleados(eEmpleado lista[], int tam, eSector sectores[], int tamSector);

void harcodearEmpleados(eEmpleado empleados[]);

void listarSectores(eSector sectores[], int tam);

void obtenerSector(eSector sectores[], int tam, int idSector, char cadena[]);

void cargarSectores(eSector sectores[]);

void cargarComidas(eComida comidas[]);

void listarComidas(eComida c[], int tam);

int buscarLibreAlmuerzo(eAlmuerzo food[], int tam);

void inicializarAlmuerzo(eAlmuerzo food[], int tam);

void altaAlmuerzo(eAlmuerzo alm[], int tamAlm, eComida com[], int tamCom, eEmpleado emp[], int tamEmp, eSector sec[], int tamSec, int *pId);




