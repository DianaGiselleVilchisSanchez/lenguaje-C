#include <stdio.h>

float celsiusToFahrenheit(float c) {
    return (c * 9/5) + 32;
}

int main() {
    float celsius;
    printf("Ingrese temperatura en Celsius: ");
    if (scanf("%f", &celsius) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }
    printf("%.2f °C = %.2f °F\n", celsius, celsiusToFahrenheit(celsius));
    return 0;
}