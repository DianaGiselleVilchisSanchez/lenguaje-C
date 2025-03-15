#include <stdio.h>

int main() {
    FILE *file = fopen("archivo.txt", "r");
    char c;
    int count = 0;
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    while ((c = fgetc(file)) != EOF) {
        count++;
    }
    fclose(file);
    printf("Caracteres: %d\n", count);
    return 0;
}
