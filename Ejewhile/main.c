#include <stdio.h>
#include <stdlib.h>

int main()
{
   float numero;
   float resultado;
   float promediosPositivos;
   float promediosNegativos;
   char seguir='s';
   int contador=0;
   int contadorPares=0;
   int i;
   int cantidadNegativos=0;
   int cantidadPositivos=0;
   int maximo;
   int minimo;
   int cantidadCeros=0;
   float sumaPositivos;
   float sumaNegativos;



   do
   {
        printf("Ingrese su numero: ");
        scanf("%f", &numero);
        fflush(stdin);
        printf("Desea seguir subiendo numeros?: ");
        scanf("%c", &seguir);

        if(numero==0)
        {
            cantidadCeros++;
        }














        if(i%2 == 0)
        {
            contadorPares++;
        }






















   }while(seguir=='s');


    printf("Cantidad Positivos: %d\n", cantidadPositivos);
    printf("Cantidad Negativos: %d\n", cantidadNegativos);
    printf("Cantidad Ceros: %d\n", cantidadCeros);
    printf("Numeros pares: %d\n", contadorPares);
    printf("Promedio Positivos: %.2f\n", promediosPositivos);
    printf("Promedio Negativos: %.2f\n", promediosNegativos);
    printf("Suma de Positivos: %.2\n", sumaPositivos);
    printf("Suma de Negativos: %.2\n", sumaNegativos);




    return 0;
}



/*
1- cantidad positivos
2- cant negativos
3- cant ceros
4- cant pares
5- promedio negativos
6- promedio positivos
7- diferencia entre positivo y negativo
8- suma positivos
9- suma negativos
10- maximo y minimo
*/

