#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funcion.h"

int main()
{

   ePendrive* pen1, *pen2;

   pen1 = new_pendrive();
   pen2 = new_pendrive();

   mostrarPendrive(pen1, pen2);

   free(pen1);
   free(pen2);


    return 0;
}
