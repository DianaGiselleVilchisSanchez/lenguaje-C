#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Introduce una cadena: ");
    scanf("%s", str);
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
