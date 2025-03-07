#include <stdio.h>
#include <unistd.h>

int main() {
    int segundos;
    printf("Introduce los segundos: ");
    scanf("%d", &segundos);
    while (segundos >= 0) {
        printf("%d\n", segundos--);
        sleep(1);
    }
    printf("¡Tiempo terminado!\n");
    return 0;
}
