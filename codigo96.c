//Muestra números pares del 1 al 50
#include <stdio.h>

int main() {
    printf("Números pares del 1 al 50:\n");
    for (int i = 2; i <= 50; i += 2)
        printf("%d ", i);
    printf("\n");
    return 0;
}