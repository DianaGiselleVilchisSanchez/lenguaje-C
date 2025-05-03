#include <stdio.h>
#include <unistd.h>

int main() {
    while (1) {
        printf("\033[0;31mROJO\033[0m\n");
        sleep(3);
        printf("\033[0;33mAMARILLO\033[0m\n");
        sleep(1);
        printf("\033[0;32mVERDE\033[0m\n");
        sleep(3);
    }
    return 0;
}