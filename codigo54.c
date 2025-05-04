#include <stdio.h>
#include <string.h>

int main() {
    char texto[256];
    char *palabras[50];
    int conteo[50] = {0}, n = 0;

    printf("Ingresa texto: ");
    fgets(texto, 256, stdin);

    char *token = strtok(texto, " ,.-\n");
    while (token) {
        int i;
        for (i = 0; i < n; i++) {
            if (strcmp(palabras[i], token) == 0) {
                conteo[i]++;
                break;
            }
        }
        if (i == n) {
            palabras[n] = token;
            conteo[n++] = 1;
        }
        token = strtok(NULL, " ,.-\n");
    }

    for (int i = 0; i < n; i++) {
        if (conteo[i] > 1)
            printf("%s se repite %d veces\n", palabras[i], conteo[i]);
    }
    return 0;
}