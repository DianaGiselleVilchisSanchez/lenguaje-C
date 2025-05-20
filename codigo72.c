//Conversor de número a romano (1-100)
#include <stdio.h>

void aRomano(int n) {
    while (n >= 100) { printf("C"); n -= 100; }
    while (n >= 90)  { printf("XC"); n -= 90; }
    while (n >= 50)  { printf("L"); n -= 50; }
    while (n >= 40)  { printf("XL"); n -= 40; }
    while (n >= 10)  { printf("X"); n -= 10; }
    while (n >= 9)   { printf("IX"); n -= 9; }
    while (n >= 5)   { printf("V"); n -= 5; }
    while (n >= 4)   { printf("IV"); n -= 4; }
    while (n >= 1)   { printf("I"); n -= 1; }
}

int main() {
    int num;
    printf("Ingrese un número (1-100): ");
    scanf("%d", &num);
    if (num < 1 || num > 100)
        printf("Fuera de rango.\n");
    else {
        printf("Número romano: ");
        aRomano(num);
        printf("\n");
    }
    return 0;
}