#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    printf("Ingresa texto: ");
    fgets(input, sizeof(input), stdin);
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        int count = 1;
        while (input[i] == input[i+1]) {
            count++;
            i++;
        }
        printf("%c%d", input[i], count);
    }
    printf("\n");
    return 0;
}