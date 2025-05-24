// Contador de palabras en una frase
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int palabras = 0;
    printf("Ingrese una frase: ");
    fgets(frase, 100, stdin);
    for (int i = 0; frase[i]; i++) {
        if (frase[i] == ' ' || frase[i] == '\n' || frase[i] == '\t') {
            palabras++;
            while (frase[i+1] == ' ' || frase[i+1] == '\n' || frase[i+1] == '\t') i++;
        }
    }
    printf("Número de palabras: %d\n", palabras + 1);
    return 0;
}
