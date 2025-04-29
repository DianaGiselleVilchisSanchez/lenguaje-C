#include <stdio.h>

int main() {
    for (int y = 10; y >= -10; y--) {
        for (int x = -30; x <= 30; x++) {
            if (x == 0 && y == 0) printf("+");
            else if (x == 0) printf("|");
            else if (y == 0) printf("-");
            else if (y == x*x/25 - 10) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}