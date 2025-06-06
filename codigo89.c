//Número perfecto (suma divisores)
#include <stdio.h>

int esPerfecto(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) suma += i;
    return suma == n;
}

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    if (esPerfecto(num))
        printf("%d es un número perfecto.\n", num);
    else
        printf("%d no es un número perfecto.\n", num);
    return 0;
}