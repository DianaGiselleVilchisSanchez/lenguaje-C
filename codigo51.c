#include <stdio.h>

int main() {
    FILE *f = fopen("archivo.bin", "rb");
    if (!f) return 1;
    unsigned char byte;
    int offset = 0;
    while (fread(&byte, 1, 1, f)) {
        if (offset % 16 == 0) printf("\n%08x  ", offset);
        printf("%02x ", byte);
        offset++;
    }
    printf("\n");
    fclose(f);
    return 0;
}