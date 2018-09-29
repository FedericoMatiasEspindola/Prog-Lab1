typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int isEmpty;

}eEmpleado;

int menu();

void inicializarEmpleados(eEmpleado lista[], int tam);

void mostrarEmpleados(eEmpleado lista[], int tam);

void mostrarEmpleado(eEmpleado unEmpleado);

int buscarLibre(eEmpleado lista[], int tam);

int buscarEmpleado(eEmpleado lista[], int tam, int legajo);

void altaEmpleado(eEmpleado lista[], int tam);

void bajaEmpleado(eEmpleado lista[], int tam);

void modificaEmpleado(eEmpleado lista[], int tam);

int menuModifica();
