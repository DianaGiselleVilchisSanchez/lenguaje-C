//Contador de ocurrencias de una palabra en texto
#include <stdio.h>
#include <string.h>

int main() {
    char texto[256], palabra[30];
    int contador = 0;
    printf("Ingrese texto: ");
    fgets(texto, 256, stdin);
    printf("Palabra a buscar: ");
    scanf("%s", palabra);
    char *ptr = texto;
    while ((ptr = strstr(ptr, palabra)) != NULL) {
        contador++;
        ptr += strlen(palabra);
    }
    printf("La palabra '%s' aparece %d veces.\n", palabra, contador);
    return 0;
}