//Calculadora de intereses compuestos
#include <stdio.h>
#include <math.h>

int main() {
    double principal, tasa, tiempo, monto;
    printf("Capital: ");
    scanf("%lf", &principal);
    printf("Tasa anual (%%): ");
    scanf("%lf", &tasa);
    printf("Tiempo (años): ");
    scanf("%lf", &tiempo);

    monto = principal * pow(1 + tasa/100, tiempo);
    printf("Monto final: %.2lf\n", monto);
    return 0;
}