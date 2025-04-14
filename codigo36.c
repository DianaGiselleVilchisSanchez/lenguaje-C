#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    FILE *f1 = fopen(argv[1], "rb");
    FILE *f2 = fopen(argv[2], "rb");
    int pos = 0;
    int c1, c2;
    while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
        if (c1 != c2) {
            printf("Diferencia en byte %d: %02X != %02X\n", pos, c1, c2);
        }
        pos++;
    }
    fclose(f1);
    fclose(f2);
    return 0;
}