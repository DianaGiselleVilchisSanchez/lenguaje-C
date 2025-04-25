#include <stdio.h>
#define N 9

int tablero[N][N];

int es_valido(int fila, int col, int num) {
    for (int i = 0; i < N; i++) {
        if (tablero[fila][i] == num || tablero[i][col] == num)
            return 0;
        int boxRow = 3 * (fila/3) + i/3;
        int boxCol = 3 * (col/3) + i%3;
        if (tablero[boxRow][boxCol] == num)
            return 0;
    }
    return 1;
}

int resolver() {
    for (int fila = 0; fila < N; fila++) {
        for (int col = 0; col < N; col++) {
            if (tablero[fila][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (es_valido(fila, col, num)) {
                        tablero[fila][col] = num;
                        if (resolver()) return 1;
                        tablero[fila][col] = 0;
                    }
                }
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    printf("Introduce el tablero (9x9), usa 0 para espacios vacíos:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &tablero[i][j]);

    if (resolver()) {
        printf("Solución:\n");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                printf("%d ", tablero[i][j]);
            printf("\n");
        }
    } else {
        printf("Sin solución.\n");
    }
    return 0;
}
