#include <stdio.h>
#include <stdlib.h>
#include "Funcion.h"

int main()
{

    ePendrive miPendrive;

    ePendrive pen1 = new_pendrive;

    if(cargarPendrive(&miPendrive))
    {
        mostrarPendrive(&miPendrive);
    }

    return 0;
}
