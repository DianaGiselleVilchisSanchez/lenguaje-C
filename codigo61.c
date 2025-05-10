// Cálculo de promedio de alumnos
#include <stdio.h>
#define N 5

int main() {
    float calificaciones[N], suma = 0;
    for (int i = 0; i < N; i++) {
        printf("Calificación %d: ", i + 1);
        scanf("%f", &calificaciones[i]);
        suma += calificaciones[i];
    }
    printf("Promedio: %.2f\n", suma / N);
    return 0;
}
