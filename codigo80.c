//Contador de caracteres (distingue letras, números y otros)
#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[100];
    int letras = 0, digitos = 0, otros = 0;
    printf("Ingrese texto: ");
    fgets(texto, 100, stdin);
    for (int i = 0; texto[i]; i++) {
        if (isalpha(texto[i])) letras++;
        else if (isdigit(texto[i])) digitos++;
        else if (!isspace(texto[i])) otros++;
    }
    printf("Letras: %d\nDígitos: %d\nOtros caracteres: %d\n", letras, digitos, otros);
    return 0;
}