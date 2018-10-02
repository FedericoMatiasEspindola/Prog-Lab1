typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int idSector;
    int isEmpty;
} eEmpleado;

typedef struct
{
    int id;
    char descripcion[20];
}eSector;

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

//void mostrarEmpleadosSector(eEmpleado lista[], int tam, eSector sectores[], int tamSector);

//void ordenarEmpleadosSectorNombre(eEmpleado lista[], int tam);
