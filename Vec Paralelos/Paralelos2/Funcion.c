
void ordenar(char nombre[][20], int leg[], int pp[], int sp[], float prom[], char sex[], int tam)
{

    int auxInt;
    float auxFloat;
    char auxChar;
    char auxCad[20];

    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(prom[i] < prom[j]) //strcmp(nombre[i], nombre[j] > 0   Para ordenar por nombres
            {
                strcpy(auxCad, nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],auxCad);

                auxInt=leg[i];
                leg[i]=leg[j];
                leg[j]=auxInt;

                auxInt=pp[i];
                pp[i]=pp[j];
                pp[j]=auxInt;

                auxInt=sp[i];
                sp[i]=sp[j];
                sp[j]=auxInt;

                auxFloat=prom[i];
                prom[i]=prom[j];
                prom[j]=auxFloat;

                auxChar=sex[i];
                sex[i]=sex[j];
                sex[j]=auxChar;


            }
        }
    }
}


