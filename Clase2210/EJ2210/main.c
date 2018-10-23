#include <stdio.h>
#include <stdlib.h>
#include "Funcion.h"

int main()
{

   ePendrive* pen1;

   pen1 = new_pendriveParam(1234, "kingston", 32, 560);

   mostrarPendrive(pen1);

   free(pen1);

    return 0;
}
