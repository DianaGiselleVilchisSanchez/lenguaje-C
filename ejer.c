#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, n;
    char *buffer, *p_buffer;
    puts("Teclea la longitud del arreglo");
    scanf("%d", &n);
    buffer = (char*) malloc((n) * sizeof(char)); 

    if (buffer == NULL) 
        exit(1);

    p_buffer = buffer;

    for (i = 0; i < n; i++) {
        printf("Ingresa una letra en la posicion %d: ", i);
        scanf(" %c", p_buffer);
        p_buffer++;
    }

    p_buffer = buffer + n - 1; 
    puts("Los valores son...");
    for (i = n - 1; i >= 0; i--) {
        printf("Arreglo[%d] = %c\n", i, *p_buffer--);
    }

    free(buffer);
    return 0;
}