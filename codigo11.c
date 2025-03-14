#include <stdio.h>

int mcd(int a, int b) {
    return (b == 0) ? a : mcd(b, a % b);
}

int main() {
    int a, b;
    printf("Introduce dos numeros: ");
    scanf("%d %d", &a, &b);
    printf("El MCD es: %d\n", mcd(a, b));
    return 0;
}
