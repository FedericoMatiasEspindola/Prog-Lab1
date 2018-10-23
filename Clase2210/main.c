#include <stdio.h>
#include <stdlib.h>
#include "Funcion.h"

int main()
{

    ePendrive miPendrive;

    if(cargarPendrive(&miPendrive))
    {
        mostrarPendrive(&miPendrive);
    }

    return 0;
}
