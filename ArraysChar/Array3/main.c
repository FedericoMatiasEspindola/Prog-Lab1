#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

   char nombre[20]={"MaRiAnA INeS"};
   char apellido[20]={"PEREz"};
   char nombreCompleto[40];


   strcpy(nombreCompleto,nombre); //Se copia nombre a nombreCompleto
   strcat(nombreCompleto, " "); //Se une espacion a nombreCompleto
   strcat(nombreCompleto,apellido); //Se une apellido a nombreCompleto

   strlwr(nombreCompleto); //Se pone todo en minusculas

   nombreCompleto[0]=toupper(nombreCompleto[0]); //Se pasa a Mayusculas el indice 0

   int cant=strlen(nombreCompleto); //Se Crea variale Cantidad del mismo tamaño de la cadena

   for(int i=0;i<cant;i++)
   {
       if(nombreCompleto[i]== ' ')
       {
           nombreCompleto[i+1]=toupper(nombreCompleto[i+1]); //Se aplica Mayusculas a la letra despues del espacio
       }
   }

   printf("%s ", nombreCompleto); //Se muestra









/*
   strupr(nombre);
   strlwr(nombre+1);
   strupr(nombre+8);
   strlwr(nombre+9);
   strupr(apellido);
   strlwr(apellido+1);

   strcat(nombre, " ");
   strcat(nombre,apellido);

   strcat(nombreCompleto,nombre);

   printf("%s ", nombreCompleto);
*/


    return 0;
}
