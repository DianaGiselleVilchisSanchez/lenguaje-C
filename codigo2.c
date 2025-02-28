#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    printf("Dado 1: %d\n", rand() % 6 + 1);
    printf("Dado 2: %d\n", rand() % 6 + 1);
    return 0;
}
