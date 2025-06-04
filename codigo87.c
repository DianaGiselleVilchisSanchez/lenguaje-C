//Calculadora de factorial usando recursión
#include <stdio.h>

long factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Número inválido.\n");
    else
        printf("Factorial de %d es %ld\n", num, factorial(num));
    return 0;
}