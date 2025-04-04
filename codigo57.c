// codigo47.c - Análisis de ventas mensuales
#include <stdio.h>

#define MESES 12

void ingresarVentas(float ventas[]) {
    for (int i = 0; i < MESES; i++) {
        printf("Ingrese ventas del mes %d: ", i + 1);
        scanf("%f", &ventas[i]);
    }
}

float calcularPromedio(float ventas[]) {
    float suma = 0;
    for (int i = 0; i < MESES; i++) {
        suma += ventas[i];
    }
    return suma / MESES;
}

void mostrarVentas(float ventas[]) {
    printf("\n--- Ventas por Mes ---\n");
    for (int i = 0; i < MESES; i++) {
        printf("Mes %2d: $%.2f\n", i + 1, ventas[i]);
    }
}

void mostrarResumen(float ventas[]) {
    float promedio = calcularPromedio(ventas);
    printf("\nPromedio de ventas anual: $%.2f\n", promedio);

    float max = ventas[0], min = ventas[0];
    int mesMax = 1, mesMin = 1;

    for (int i = 1; i < MESES; i++) {
        if (ventas[i] > max) {
            max = ventas[i];
            mesMax = i + 1;
        }
        if (ventas[i] < min) {
            min = ventas[i];
            mesMin = i + 1;
        }
    }

    printf("Mayor venta: Mes %d ($%.2f)\n", mesMax, max);
    printf("Menor venta: Mes %d ($%.2f)\n", mesMin, min);
}

int main() {
    float ventas[MESES];

    ingresarVentas(ventas);
    mostrarVentas(ventas);
    mostrarResumen(ventas);

    return 0;
}
