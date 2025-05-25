//Verificador de números primos
#include <stdio.h>
#include <math.h>

int esPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (esPrimo(num))
        printf("Es primo.\n");
    else
        printf("No es primo.\n");
    return 0;
}
