//egistro de empleados y búsqueda por ID
#include <stdio.h>
#include <string.h>
#define N 3

typedef struct {
    int id;
    char nombre[30];
} Empleado;

int main() {
    Empleado empleados[N] = {
        {101, "Ana"},
        {102, "Luis"},
        {103, "Clara"}
    };
    int buscarId;
    printf("Ingrese ID a buscar: ");
    scanf("%d", &buscarId);
    for (int i = 0; i < N; i++) {
        if (empleados[i].id == buscarId) {
            printf("Empleado encontrado: %s\n", empleados[i].nombre);
            return 0;
        }
    }
    printf("Empleado no encontrado.\n");
    return 0;
}