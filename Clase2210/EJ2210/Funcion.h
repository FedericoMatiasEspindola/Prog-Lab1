
typedef struct
{
    int codigo;
    char marca[20];
    int capacidad;
    float precio;
}ePendrive;


void mostrarPendrive(ePendrive* pen);
ePendrive* new_pendrive();
ePendrive* new_pendriveParam(int codigo, char* marca, int capacidad, float precio);
