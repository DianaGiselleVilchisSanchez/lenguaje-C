#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);
    clock_t t0 = clock();
    
    if (x <= 0) {
        printf("El tamaño del arreglo debe ser mayor que cero.\n");
        return 1;
    }
    
    int arreglo[x];
    
    for (int i = 0; i < x; i++) {
        printf("Ingrese el valor número %d:\n", i+1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("El arreglo es:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", arreglo[i]);
    }
    printf ("\n");

//
    clock_t t1 = clock();
    double time = (double)(t1 - t0) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %f segundos\n", time);
    return 0;
}