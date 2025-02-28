#include <stdio.h>

int main() {
    int num, binario[32], i = 0;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    while (num > 0) {
        binario[i++] = num % 2;
        num /= 2;
    }
    printf("En binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
    return 0;
}
