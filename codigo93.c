//Verificador de número capicúa
#include <stdio.h>

int main() {
    int n, original, invertido = 0, resto;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        resto = n % 10;
        invertido = invertido * 10 + resto;
        n /= 10;
    }
    if (original == invertido)
        printf("El número es capicúa.\n");
    else
        printf("El número no es capicúa.\n");
    return 0;
}