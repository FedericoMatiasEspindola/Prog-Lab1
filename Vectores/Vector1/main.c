#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5];

    for(int i=0;i<5;i++)
    {
        printf("Ingrese 5 numeros: ");
        scanf("%d", &vec[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\t", vec[i]);
    }

    return 0;
}
