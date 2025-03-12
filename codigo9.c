#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Adivina el numero (1-100): ");
    do {
        scanf("%d", &guess);
        if (guess > num) printf("Muy alto!\n");
        else if (guess < num) printf("Muy bajo!\n");
    } while (guess != num);
    printf("¡Correcto!\n");
    return 0;
}
