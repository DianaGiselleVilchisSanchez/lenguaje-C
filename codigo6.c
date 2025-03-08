#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int count = 1;
    printf("Introduce una frase: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            count++;
        }
    }
    printf("Numero de palabras: %d\n", count);
    return 0;
}
