#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#define TAM 10
#include "Funcion.h"


int main()
{

    char seguir = 's';
    //int codigoGame = 1000;
    int codigoCliente = 1000;


   // eCategoria categorias[5];
    //cargarCategoria(categorias);

   // eJuego games[20];

    eCliente clientes[TAM];

    inicializarCliente(clientes,TAM);

   // inicializarJuego(games, 20);

    do
    {
        switch(menuCliente())
        {
        case 1:
            altaCliente(clientes, TAM, &codigoCliente);
            //(clientes, TAM, categorias, 5);
            break;
        case 2:
            modificarCliente(clientes, TAM);
            break;
        case 3:
            bajaCliente(clientes,TAM);
            break;
        case 4:
            mostrarClientes(clientes, TAM);
            //(clientes, TAM, categorias, 5);
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }
    while(seguir == 's');

    return 0;
}
