// Convertir número decimal a binario
#include <stdio.h>

void aBinario(int n) {
    if (n == 0) return;
    aBinario(n / 2);
    printf("%d", n % 2);
}

int main() {
    int numero;
    printf("Ingrese número decimal: ");
    scanf("%d", &numero);
    printf("Binario: ");
    if (numero == 0) printf("0");
    else aBinario(numero);
    printf("\n");
    return 0;
}