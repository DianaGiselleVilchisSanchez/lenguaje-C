// calculadora de IVA para productos
#include <stdio.h>

int main() {
    float precio, iva;
    printf("Precio sin IVA: ");
    scanf("%f", &precio);
    iva = precio * 0.16;
    printf("IVA: $%.2f\n", iva);
    printf("Precio con IVA: $%.2f\n", precio + iva);
    return 0;
}