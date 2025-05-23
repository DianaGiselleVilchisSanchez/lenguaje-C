// Simulador de agenda telefónica (búsqueda por nombre)
#include <stdio.h>
#include <string.h>
#define N 3

typedef struct {
    char nombre[30];
    char telefono[15];
} Contacto;

int main() {
    Contacto agenda[N] = {
        {"Mario", "5512345678"},
        {"Lucía", "5587654321"},
        {"Juan", "5544433322"}
    };
    char buscar[30];
    printf("Nombre a buscar: ");
    scanf("%s", buscar);
    for (int i = 0; i < N; i++) {
        if (strcmp(agenda[i].nombre, buscar) == 0) {
            printf("Teléfono: %s\n", agenda[i].telefono);
            return 0;
        }
    }
    printf("Contacto no encontrado.\n");
    return 0;
}