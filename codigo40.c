#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    char comando[100];
    while (1) {
        printf("$ ");
        fgets(comando, sizeof(comando), stdin);
        comando[strcspn(comando, "\n")] = 0;
        if (strcmp(comando, "exit") == 0) break;
        system(comando);
    }
    return 0;
}