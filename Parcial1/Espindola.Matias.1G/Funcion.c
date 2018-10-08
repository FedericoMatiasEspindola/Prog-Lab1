#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "Funcion.h"


int menuCliente()
{
    int opcion;

    system("cls");
    printf("*** Menu de Opciones ***\n\n");
    printf(" 1- Alta\n");
    printf(" 2- Baja\n");
    printf(" 3- Modificacion\n");
    printf(" 4- Listar y Ordenar Por Sexo y Nombre\n");
    printf(" 5- Salir\n\n");
    printf("%cIngrese opcion: ", 254);
    scanf("%d", &opcion);

    return opcion;
}


void inicializarCliente(eCliente lista[], int tam)
{

    for(int i=0; i < tam; i++)
    {

        lista[i].isEmpty = 1;
    }
}


void mostrarCliente(eCliente unCliente, int tam)
{
    printf("%4d %10s %c  %d\n", unCliente.codigo, unCliente.nombre, unCliente.sexo, unCliente.telefono);
}


void mostrarClientes(eCliente lista[], int tam)
{

    system("cls");
    ordenarClienteXSexoYNombre(lista, tam);
    printf("Codigo   Nombre    Sexo   Telefono\n\n");

    for(int i=0; i < tam; i++)
    {

        if( lista[i].isEmpty == 0)
        {
            mostrarCliente(lista[i], tam);
        }
    }
    system("pause");
}


int buscarLibreCliente(eCliente lista[], int tam)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {

        if( lista[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


int buscarCliente(eCliente lista[], int tam, int codigo)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {

        if( lista[i].codigo == codigo && lista[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;

}


void altaCliente(eCliente lista[], int tam, int *pId)
{
    int indice;
    int codigo = *pId;
    eCliente nuevoCliente;

    indice = buscarLibreCliente(lista, tam);

    system("cls");
    printf("*** Alta Cliente ***\n\n");

    if( indice == -1)
    {

        printf("No hay lugar en el sistema\n\n");
        system("pause");
    }
    else
    {

            nuevoCliente.codigo = codigo;

            printf("%cIngrese nombre: ",254);
            fflush(stdin);
            gets(nuevoCliente.nombre);
            printf("%cIngrese sexo: ",254);
            fflush(stdin);
            scanf("%c", &nuevoCliente.sexo);
            printf("%cIngrese telefono: ",254);
            fflush(stdin);
            scanf("%d", &nuevoCliente.telefono);

            nuevoCliente.codigo = codigo;

            nuevoCliente.isEmpty = 0;

            lista[indice] = nuevoCliente;


    }

}


void bajaCliente(eCliente lista[], int tam)
{
    int codigo;
    int indice;
    char seguir;


    system("cls");
    printf("  *** Baja Cliente ***\n\n");

    printf("Ingrese codigo: ");
    scanf("%d", &codigo);

    indice = buscarCliente(lista, tam, codigo);

    if( indice == -1)
    {
        printf("No hay ningun cliente de codigo %d\n\n", codigo);
        system("pause");
    }
    else
    {


        printf("\nConfima borrado s/n: ");
        fflush(stdin);
        scanf("%c", &seguir);

        if(seguir == 'n')
        {
            printf("Baja cancelada\n\n");

        }
        else

        {

            lista[indice].isEmpty = 1;
            printf("Borrado exitoso\n\n");
        }
        system("pause");
    }
}


void modificarCliente(eCliente lista[], int tam)
{
    eCliente nuevoDatoCliente;
    int codigo;
    int indice;
    int existe;
    char seguir;

    system("cls");
    printf("  *** Modificar  Cliente ***\n\n");

    printf("Ingrese codigo: ");
    scanf("%d", &codigo);

    indice = buscarCliente(lista, tam, codigo);

    if( indice == -1)
    {
        printf("No hay ningun cliente de codigo %d\n\n", codigo);
        system("pause");
    }
    else
    {
        do
        {
            printf("\nConfirma modificacion? [s|n]: ");
            fflush(stdin);
            scanf("%c", &seguir);
            seguir = tolower(seguir);
        }while(seguir != 's' && seguir != 'n');

        if(seguir == 's')
        {
           do{
                switch(menuModifica())
                {
                    case 1:
                        printf("Ingrese el nuevo nombre: ");
                        fflush(stdin);
                        gets(nuevoDatoCliente.nombre);
                        strcpy(lista[existe].nombre , nuevoDatoCliente.nombre);
                        break;
                    case 3:
                        printf("Ingrese el nuevo sexo: ");
                        fflush(stdin);
                        scanf("%c" , &nuevoDatoCliente.sexo);
                        lista[existe].sexo = nuevoDatoCliente.sexo;
                        break;
                    case 4:
                        printf("Ingrese el nuevo telefono: ");
                        scanf("%d" , &nuevoDatoCliente.telefono);
                        lista[existe].telefono = nuevoDatoCliente.telefono;
                        break;
                    case 5:
                        seguir = 'n';
                        break;
                }
            }while(seguir != 'n');

            printf("\nSe ha realizado la modificacion\n\n");
            system("pause");
        }
        else
        {
            printf("\nSe ha cancelado la modificacion\n\n");
            system("pause");
        }

    }
}




void ordenarClienteXSexoYNombre(eCliente lista[], int tam)
{
    eCliente auxCliente;
    for(int i=0; i<tam-1; i++)
    {
        for(int j= i+1; j < tam; j++)
        {

            if( lista[i].sexo > lista[j].sexo && lista[i].nombre > lista[j].nombre)
            {
                auxCliente = lista[i];
                lista[i] = lista[j];
                lista[j] = auxCliente;
            }
        }
    }

}







/*


void cargarCategoria(eCategoria game[])
{
    eCategoria juego[]=
    {
        {1, "Mesa"},
        {2, "Azar"},
        {3, "Estrategia"},
        {4, "Salon"},
        {5, "Magia"}
    };

    for(int i=0; i<5; i++)
    {
        game[i]= juego[i];
    }
}


void listarJuegos(eCategoria game[], int tam)
{
    system("cls");
    printf("\n---Lista de Juegos---\n\n");
    for(int i=0; i<5; i++)
    {
        printf(" %d  %10s\n", game[i].id, game[i].descripcion);
    }
    printf("\n\n");
}


int buscarJuegoLibre(eJuego game[], int tam)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {

        if( game[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


void inicializarJuego(eJuego game[], int tam)
{

    for(int i=0; i < tam; i++)
    {

        game[i].isEmpty = 1;
    }
}


void altaJuego(eJuego game[], int tamGame, eCategoria categorias[], int tamCat, eCliente cliente[], int tamCliente, int *pId)
{
    int codigoGame = *pId;
    int idCategoria;
    eFecha fecha;
    eJuego nuevoGame;
    int indice;
    float nuevoImporte;

    indice = buscarJuegoLibre(game, tamGame);

    if(indice == -1)
    {
        printf("No se pueden cargar mas Juegos!\n");
    }
    else
    {
        nuevoGame.codigoGame = codigoGame;

        mostrarClientes(cliente, tamCliente);

        printf("\n\n");


        listarJuegos(categorias, tamCat);
        printf("Ingrese Juego: ");
        scanf("%d", &idCategoria);

        nuevoGame.idCategoria = idCategoria;

        printf("Ingrese importe: ");
        scanf("%f", &nuevoImporte);

        printf("Ingrese Dia: ");
        scanf("%d", &fecha.dia);

        printf("Ingrese Mes: ");
        scanf("%d", &fecha.mes);

        printf("Ingrese Anio: ");
        scanf("%d", &fecha.anio);

        nuevoGame.importe = nuevoImporte;

        nuevoGame.isEmpty = 0;

        game[indice] = nuevoGame;

        printf("\nCarga Exitosa!\n");
        printf("\n\n");
        system("pause");
    }
}


void mostrarJuego(eCliente unCliente[], int tam, eCategoria categoria[], eJuego unGame[], eFecha fecha[])
{
    char descGame[20];

    obtenerCategoria(categoria, tam, descGame);

    printf("%4d   %2d/%2d/%2d      %4d     %s    %c   %d   %.2f     %c\n", unGame.codigoGame, fecha.dia, fecha.mes, fecha.anio, unCliente.codigo, unCliente.nombre, unCliente.sexo, unCliente.telefono, unGame.importe, descGame);
}


void mostrarJuegos(eCliente lista[], int tam, eJuego game[], int tamGame)
{

    system("cls");
    printf("ID   Fecha    Codigo   Nombre    Sexo     Telefono    Importe   Juego \n\n");

    for(int i=0; i < tam; i++)
    {

        if( lista[i].isEmpty == 0)
        {
            mostrarJuego(lista[i], game, tamGame);
        }
    }
    system("pause");
}


void obtenerCategoria(eCategoria categorias[], int tam, int idCategoria, char cadena[])
{
    for(int i=0; i < tam; i++)
        {
            if( categorias[i].id == idCategoria)
            {
                strcpy(cadena, categorias[i].descripcion);
            }
        }
}
*/

int menuModifica()
{
    int opcion;
    system("cls");
    printf("---Modificar Cliente---\n\n");
    printf("1-Nombre\n");
    printf("4-Sexo\n");
    printf("5-Telefono\n");
    printf("5-Salir\n");
    printf("\nIngrese opcion: ");
    scanf("%d", &opcion);
    return opcion;
}
