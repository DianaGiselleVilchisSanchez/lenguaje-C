//Simulador de préstamo bancario
#include <stdio.h>

int main() {
    double monto, tasa;
    int meses;
    printf("Monto del préstamo: ");
    scanf("%lf", &monto);
    printf("Tasa mensual (%%): ");
    scanf("%lf", &tasa);
    printf("Plazo en meses: ");
    scanf("%d", &meses);
    double pagoMensual = monto * (tasa / 100);
    double total = pagoMensual * meses + monto;
    printf("Pago mensual estimado: %.2lf\n", pagoMensual);
    printf("Total a pagar: %.2lf\n", total);
    return 0;
}