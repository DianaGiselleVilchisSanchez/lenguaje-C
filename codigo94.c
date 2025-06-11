//Contador de líneas en un archivo (ejemplo simple)
#include <stdio.h>

int main() {
    FILE *archivo;
    int contador = 0;
    char c;
    archivo = fopen("archivo.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    while ((c = fgetc(archivo)) != EOF) {
        if (c == '\n')
            contador++;
    }
    fclose(archivo);
    printf("Número de líneas: %d\n", contador);
    return 0;
}
