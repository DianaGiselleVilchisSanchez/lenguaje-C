//Cálculo de la suma de los primeros n números naturales
#include <stdio.h>

int main() {
    int n, suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        suma += i;
    printf("Suma de los primeros %d números naturales: %d\n", n, suma);
    return 0;
}