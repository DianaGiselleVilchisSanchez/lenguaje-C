#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int num = rand() % 100 + 1;
    printf("Numero aleatorio: %d\n", num);
    return 0;
}
