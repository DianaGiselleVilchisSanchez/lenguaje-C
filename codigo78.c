//Conversor de unidades (metros a pies, pulgadas y cm)
#include <stdio.h>

int main() {
    float metros;
    printf("Ingrese metros: ");
    scanf("%f", &metros);
    printf("%.2f metros = %.2f pies\n", metros, metros * 3.28084);
    printf("%.2f metros = %.2f pulgadas\n", metros, metros * 39.3701);
    printf("%.2f metros = %.2f centímetros\n", metros, metros * 100);
    return 0;
}
