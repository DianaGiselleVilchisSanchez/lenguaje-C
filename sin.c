#include <stdio.h>
#include <time.h>
int main() {
    int arreglo[20];
    int i = 0;
    clock_t t0 = clock();

    while (i < 20) {
        arreglo[i] = 20 - i;
        i++;
    }
    i = 0;
    while (i < 20) {
        printf("%d ", arreglo[i]);
        i++;
    }
    clock_t t1 = clock();
    double time = (double)(t1 - t0) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %f segundos\n", time);
    return 0;
}
