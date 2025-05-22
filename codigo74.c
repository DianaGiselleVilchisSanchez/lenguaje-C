// comparador de cadenas ignorando mayúsculas
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int iguales(char *a, char *b) {
    for (; *a && *b; a++, b++)
        if (tolower(*a) != tolower(*b)) return 0;
    return *a == *b;
}

int main() {
    char s1[50], s2[50];
    printf("Cadena 1: ");
    scanf("%s", s1);
    printf("Cadena 2: ");
    scanf("%s", s2);
    if (iguales(s1, s2))
        printf("Son iguales (ignorando mayúsculas).\n");
    else
        printf("Son diferentes.\n");
    return 0;
}