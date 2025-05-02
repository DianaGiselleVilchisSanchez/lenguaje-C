#include <stdio.h>
#include <string.h>
#include <ctype.h>

int es_palindromo(char *str) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        if (!isalnum(str[i])) { i++; continue; }
        if (!isalnum(str[j])) { j--; continue; }
        if (tolower(str[i]) != tolower(str[j])) return 0;
        i++; j--;
    }
    return 1;
}

int main() {
    char texto[100];
    printf("Ingresa una frase: ");
    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = 0;
    if (es_palindromo(texto)) printf("Es palíndromo\n");
    else printf("No es palíndromo\n");
    return 0;
}