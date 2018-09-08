#include <stdio.h>
#include <stdlib.h>

void ordenar(int vec[], int tam)
{
    for(int i=0; i<tam-1; i++)
    {
        int aux;
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


void ordenar2(int vec[], int tam)
{
    for(int i=0; i<tam-1; i++)
    {
        int aux;
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





void mostrarVector(int x[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("%d\t", x[i]);
    }

    printf("\n\n");
}


int validarRango(int valor, int lmin, int lsup)
{

    return !( valor < lmin || valor > lsup);

}
