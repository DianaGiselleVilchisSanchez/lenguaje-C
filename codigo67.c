//egistro de temperatura diaria (array + promedio)
#include <stdio.h>
#define DIAS 7

int main() {
    float temps[DIAS], suma = 0;
    printf("Temperaturas diarias:\n");
    for (int i = 0; i < DIAS; i++) {
        printf("Día %d: ", i + 1);
        scanf("%f", &temps[i]);
        suma += temps[i];
    }
    printf("Temperatura promedio: %.2f°C\n", suma / DIAS);
    return 0;
}