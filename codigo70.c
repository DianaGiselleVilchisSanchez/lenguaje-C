//Convertidor de segundos a hh:mm:ss
#include <stdio.h>

int main() {
    int segundos, h, m, s;
    printf("Ingrese segundos: ");
    scanf("%d", &segundos);
    h = segundos / 3600;
    m = (segundos % 3600) / 60;
    s = segundos % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}