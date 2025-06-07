//Juego simple: adivina el número
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, intentos = 0;
    srand(time(NULL));
    num = rand() % 100 + 1;
    printf("Adivina el número entre 1 y 100:\n");
    do {
        scanf("%d", &guess);
        intentos++;
        if (guess < num)
            printf("Muy bajo\n");
        else if (guess > num)
            printf("Muy alto\n");
    } while (guess != num);
    printf("¡Correcto! Intentos: %d\n", intentos);
    return 0;
}