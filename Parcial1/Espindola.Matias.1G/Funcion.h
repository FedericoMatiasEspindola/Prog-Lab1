typedef struct
{
    int codigoGame;
    char descripcionGame[20];
    float importe;
    int idCategoria;
    int isEmpty;
}eJuego;

typedef struct
{
    int codigo;
    char nombre[20];
    char sexo;
    int telefono;
    int isEmpty;

} eCliente;


typedef struct
{
    int id;
    char descripcion[20];
}eCategoria;


typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;




int menuCliente();

void inicializarCliente(eCliente lista[], int tam);

int buscarCliente(eCliente lista[], int tam, int codigo);

int buscarLibreCliente(eCliente lista[], int tam);

void altaCliente(eCliente lista[], int tam, int *pId);

void bajaCliente(eCliente lista[], int tam);

void modificarCliente(eCliente lista[], int tam);

void ordenarClienteXSexoYNombre(eCliente lista[], int tam);

void mostrarCliente(eCliente unCliente, int tam);

void mostrarClientes(eCliente lista[], int tam);












/*
void altaJuego(eJuego game[], int tamGame, eCategoria categorias[], int tamCat, eCliente cliente[], int tamCliente, int *pId);

void cargarCategoria(eCategoria game[]);

void listarJuegos(eCategoria game[], int tam);

int buscarJuegoLibre(eJuego game[], int tam);

void inicializarJuego(eJuego game[], int tam);

void mostrarJuego(eCliente unCliente[], int tam, eCategoria categoria[], eJuego unGame[], eFecha fecha[]);

void mostrarJuegos(eCliente lista[], int tam, eJuego game[], int tamGame);

void obtenerCategoria(eCategoria categorias[], int tam, int idCategoria, char cadena[]);
*/
int menuModifica();
