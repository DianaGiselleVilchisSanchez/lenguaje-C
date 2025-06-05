//Invertir una cadena
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Ingrese una cadena: ");
    fgets(str, 100, stdin);
    int len = strlen(str);
    if (str[len-1] == '\n') str[len-1] = '\0'; // eliminar salto de línea
    for (int i = strlen(str) - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}