#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* vec;

    vec = (int*)  calloc(10, sizeof(int));

    for(int i=0; i<10; i++)
    {
        printf("%d", *(vec + i))
    }

    return 0;
}
