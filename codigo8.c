#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    printf("Introduce los dos catetos: ");
    scanf("%f %f", &a, &b);
    printf("La hipotenusa es: %.2f\n", sqrt(a * a + b * b));
    return 0;
}
