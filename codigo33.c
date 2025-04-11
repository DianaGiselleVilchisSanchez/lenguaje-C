#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void leer_cpu() {
    FILE *fp = fopen("/proc/stat", "r");
    char buffer[256];
    if (fp) {
        fgets(buffer, sizeof(buffer), fp);
        printf("Uso de CPU: %s", buffer);
        fclose(fp);
    }
}

void leer_memoria() {
    FILE *fp = fopen("/proc/meminfo", "r");
    char buffer[256];
    if (fp) {
        for (int i = 0; i < 2; i++) {
            fgets(buffer, sizeof(buffer), fp);
            printf("%s", buffer);
        }
        fclose(fp);
    }
}

int main() {
    while (1) {
        leer_cpu();
        leer_memoria();
        sleep(1);
        printf("\033[H\033[J"); // limpiar pantalla
    }
    return 0;
}