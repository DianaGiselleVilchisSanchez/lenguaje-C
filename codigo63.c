//Control de acceso con contraseña
#include <stdio.h>
#include <string.h>

int main() {
    char pass[20];
    printf("Contraseña: ");
    scanf("%s", pass);
    if (strcmp(pass, "admin123") == 0)
        printf("Acceso permitido\n");
    else
        printf("Acceso denegado\n");
    return 0;
}