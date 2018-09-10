#include <stdio.h>
#include <stdlib.h>
#define TAM 8

void ordenar(char vec[], int tam);
void ordenar2(char vec[], int tam);
void mostrarCharArray(char vec[], int tam);

int main()
{
   char letras[]={'d','c','a','f','A','c','z','Z'};

   printf("Letras: \n\n");
   mostrarCharArray(letras, TAM);
   ordenar(letras, 8);
   printf("Letras Ordenadas Creciente: \n\n");
   mostrarCharArray(letras, TAM);
   ordenar2(letras, 8);
   printf("Letras Ordenadas Decreciente: \n\n");
   mostrarCharArray(letras, TAM);



    return 0;
}


void mostrarCharArray(char vec[], int tam)
{
     for(int i=0;i<tam;i++)
    {
        printf(" %c\t", vec[i]);
    }

    printf("\n\n");
}

void ordenar(char vec[], int tam)
{
    for(int i=0; i<tam-1; i++)
    {
        char aux;
        for(int j=i+1; j<tam; j++)
        {

            if(vec[i]>vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
}

void ordenar2(char vec[], int tam)
{
    for(int i=0; i<tam-1; i++)
    {
        char aux;
        for(int j=i+1; j<tam; j++)
        {

            if(vec[i]<vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
}
