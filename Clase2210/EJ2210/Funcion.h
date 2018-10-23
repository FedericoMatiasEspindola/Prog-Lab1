
typedef struct
{
    int codigo;
    char marca[20];
    int capacidad;
    float precio;
}ePendrive;

ePendrive* new_pendrive();
int cargarPendrive(ePendrive* pen);
void mostrarPendrive(ePendrive* pen);

