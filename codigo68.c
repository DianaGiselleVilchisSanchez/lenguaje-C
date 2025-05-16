//Validación básica de RFC
#include <stdio.h>
#include <string.h>

int main() {
    char rfc[14];
    printf("Ingrese su RFC: ");
    scanf("%s", rfc);
    int len = strlen(rfc);
    if (len == 12 || len == 13)
        printf("RFC válido (longitud correcta).\n");
    else
        printf("RFC inválido.\n");
    return 0;
}