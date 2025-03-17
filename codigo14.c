#include <stdio.h>
#include <string.h>

int esValido(char *correo) {
    return (strchr(correo, '@') && strchr(correo, '.')) ? 1 : 0;
}

int main() {
    char correo[100];
    printf("Introduce un correo: ");
    scanf("%s", correo);
    if (esValido(correo)) {
        printf("Correo valido.\n");
    } else {
        printf("Correo invalido.\n");
    }
    return 0;
}
