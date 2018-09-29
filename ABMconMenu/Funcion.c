#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "Funcion.h"

int menu()
{
    int opcion;

    system("cls");
    printf("*** Menu de Opciones ***\n\n");
    printf("1- Alta\n");
    printf("2- Baja\n");
    printf("3- Modificacion\n");
    printf("4- Listar Empleados\n");
    printf("5- Ordenar Empleados\n");
    printf("6- Salir\n\n");
    printf("\nIngrese Opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void inicializarEmpleados(eEmpleado lista[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        lista[i].isEmpty = 1;
    }
}

void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d\t %s\t %c\t %.2f\n", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldo);
}

void mostrarEmpleados(eEmpleado lista[], int tam)
{
    system("cls");
    printf("---Lista de Empleados---\n\n");
    printf("Legajo\t Nombre\t Sexo\t Sueldo \n\n");
    for(int i=0; i< tam; i++)
    {
        if(lista[i].isEmpty == 0)
        {
            mostrarEmpleado(lista[i]);
        }
    }
    system("pause");
}

int buscarLibre(eEmpleado lista[], int tam)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(lista[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int buscarEmpleado(eEmpleado lista[], int tam, int legajo)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(lista[i].isEmpty == 0 && lista[i].legajo == legajo)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void altaEmpleado(eEmpleado lista[], int tam)
{

    eEmpleado nuevoEmpleado;

    int indice;
    int existe;
    int legajo;

    system("cls");
    printf("---Alta empleado---\n\n");

    indice = buscarLibre(lista, tam);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a empleados nuevos.\n\n");
        system("pause");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        existe = buscarEmpleado(lista, tam, legajo);

        if(existe != -1)
        {
            printf("\nEl legajo %d ya esta dado de alta en el sistema\n\n", legajo);
            mostrarEmpleado(lista[existe]);
            printf("\n\n");
            system("pause");
        }
        else{

                   nuevoEmpleado.legajo = legajo;

                   printf("Ingrese nombre: ");
                   fflush(stdin);
                   gets(nuevoEmpleado.nombre);

                   printf("Ingrese sexo: ");
                   fflush(stdin);
                   scanf("%c", &nuevoEmpleado.sexo);

                   printf("Ingrese sueldo: ");
                   scanf("%f", &nuevoEmpleado.sueldo);

                   nuevoEmpleado.isEmpty = 0;

                   lista[indice] = nuevoEmpleado;


                   printf("\nAlta exitosa!!!\n\n");
                   system("pause");

           }
    }

}

void bajaEmpleado(eEmpleado lista[], int tam)
{
    int legajo;
    int existe;
    char confirma;

    system("cls");
    printf("---Baja Empleado---\n\n");

    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    existe = buscarEmpleado(lista, tam, legajo);

    if(existe == -1)
    {
        printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);
        system("pause");
    }
    else{

            mostrarEmpleado(lista[existe]);

            do{
                printf("\nConfirma baja? [s|n]: ");
                fflush(stdin);
                scanf("%c", &confirma);
                confirma = tolower(confirma);
            }while(confirma != 's' && confirma != 'n');

            if(confirma == 's')
            {
                lista[existe].isEmpty = 1;
                printf("\nSe ha realizado la baja\n\n");
                system("pause");
            }
            else
            {
                printf("\nSe ha cancelado la baja\n\n");
                system("pause");
            }

        }
}

void modificaEmpleado(eEmpleado lista[], int tam)
{
    eEmpleado nuevoDatoEmpleado;
    int legajo;
    int existe;
    char confirma;
    //int seguir = 's';

    system("cls");
    printf("---Modifica Empleado---\n\n");

    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    existe = buscarEmpleado(lista, tam, legajo);

    if(existe == -1)
    {
        printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);
        system("pause");
    }
    else{

        mostrarEmpleado(lista[existe]);

        do{
            printf("\nConfirma modificacion? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's')
        {
            printf("Ingrese el nuevo sueldo: ");
            scanf("%f" , &nuevoDatoEmpleado.sueldo);
            lista[existe].sueldo = nuevoDatoEmpleado.sueldo;

           /* do{
                switch(menuModifica())
                {
                    case 1:
                        printf("Ingrese el nuevo legajo: ");
                        scanf("%d" , &nuevoDatoEmpleado.legajo);
                        lista[existe].legajo = nuevoDatoEmpleado.legajo;
                        break;
                    case 2:
                        printf("Ingrese el nuevo nombre: ");
                        fflush(stdin);
                        gets(nuevoDatoEmpleado.nombre);
                        strcpy(lista[existe].nombre , nuevoDatoEmpleado.nombre);
                        break;
                    case 3:
                        printf("Ingrese el nuevo sexo: ");
                        fflush(stdin);
                        scanf("%c" , &nuevoDatoEmpleado.sexo);
                        lista[existe].sexo = nuevoDatoEmpleado.sexo;
                        break;
                    case 4:
                        printf("Ingrese el nuevo sueldo: ");
                        scanf("%f" , &nuevoDatoEmpleado.sueldo);
                        lista[existe].sueldo = nuevoDatoEmpleado.sueldo;
                        break;
                    case 5:
                        seguir = 'n';
                        break;
                }

            }while(seguir != 'n');*/

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

/*int menuModifica()
{
    int opcion;

    system("cls");
    printf("---Modificar Empleados---\n\n");
    printf("1-Legajo\n");
    printf("2-Nombre\n");
    printf("3-Sexo\n");
    printf("4-Sueldo\n");
    printf("5-Salir\n");
    printf("\nIngrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
*/

