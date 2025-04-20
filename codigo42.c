#include <stdio.h>

int main() {
    char msg[100];
    int clave;
    printf("Mensaje: ");
    fgets(msg, 100, stdin);
    printf("Clave: ");
    scanf("%d", &clave);
    for (int i = 0; msg[i]; i++) {
        if (msg[i] >= 'a' && msg[i] <= 'z')
            msg[i] = ((msg[i] - 'a' + clave) % 26) + 'a';
        else if (msg[i] >= 'A' && msg[i] <= 'Z')
            msg[i] = ((msg[i] - 'A' + clave) % 26) + 'A';
    }
    printf("Cifrado: %s\n", msg);
    return 0;
}