#include <stdio.h>
#define N 3

int main() {
    int marcos[N] = {-1, -1, -1}, paginas[] = {7, 0, 1, 2, 0, 3, 0, 4}, fallos = 0;
    int pos = 0;
    for (int i = 0; i < 8; i++) {
        int pg = paginas[i], encontrado = 0;
        for (int j = 0; j < N; j++) {
            if (marcos[j] == pg) { encontrado = 1; break; }
        }
        if (!encontrado) {
            marcos[pos] = pg;
            pos = (pos + 1) % N;
            fallos++;
        }
    }
    printf("Fallos: %d\n", fallos);
    return 0;
}
