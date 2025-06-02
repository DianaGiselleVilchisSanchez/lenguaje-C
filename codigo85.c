//simulador simple de votación
#include <stdio.h>

int main() {
    int votosA = 0, votosB = 0, votosC = 0, opcion;
    printf("Ingrese votos (1:A, 2:B, 3:C, 0:terminar):\n");
    while (1) {
        scanf("%d", &opcion);
        if (opcion == 0) break;
        if (opcion == 1) votosA++;
        else if (opcion == 2) votosB++;
        else if (opcion == 3) votosC++;
    }
    printf("Resultados:\nA: %d\nB: %d\nC: %d\n", votosA, votosB, votosC);
    return 0;
}
