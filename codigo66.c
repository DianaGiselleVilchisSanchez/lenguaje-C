//Generador de reporte de pagos
#include <stdio.h>

typedef struct {
    char nombre[30];
    float pago;
} Cliente;

int main() {
    Cliente clientes[3] = {
        {"Carlos", 1250.75},
        {"Laura", 890.40},
        {"Andrés", 1000.00}
    };

    printf("--- Reporte de Pagos ---\n");
    for (int i = 0; i < 3; i++)
        printf("%s: $%.2f\n", clientes[i].nombre, clientes[i].pago);

    return 0;
}