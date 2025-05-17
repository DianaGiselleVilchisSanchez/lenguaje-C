// Simulador de descuento por volumen
#include <stdio.h>

int main() {
    int cantidad;
    float precio = 100, total;
    printf("Cantidad comprada: ");
    scanf("%d", &cantidad);
    if (cantidad > 20)
        total = cantidad * precio * 0.85;
    else if (cantidad > 10)
        total = cantidad * precio * 0.90;
    else
        total = cantidad * precio;
    printf("Total a pagar: $%.2f\n", total);
    return 0;
}