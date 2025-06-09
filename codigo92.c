//contador de vocales en una cadena
#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[100];
    int vocales = 0;
    printf("Ingrese texto: ");
    fgets(texto, 100, stdin);
    for (int i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vocales++;
    }
    printf("Número de vocales: %d\n", vocales);
    return 0;
}