// simulador de cajero automático simple
#include <stdio.h>

int main() {
    int saldo = 1000, retiro;
    printf("Saldo actual: $%d\n", saldo);
    printf("Cantidad a retirar: ");
    scanf("%d", &retiro);
    if (retiro > saldo)
        printf("Saldo insuficiente.\n");
    else {
        saldo -= retiro;
        printf("Retiro exitoso. Nuevo saldo: $%d\n", saldo);
    }
    return 0;
}