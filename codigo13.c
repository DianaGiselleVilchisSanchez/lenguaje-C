#include <stdio.h>
#include <unistd.h>

int main() {
    while (1) {
        printf("Rojo\n");
        sleep(3);
        printf("Amarillo\n");
        sleep(1);
        printf("Verde\n");
        sleep(3);
    }
    return 0;
}
