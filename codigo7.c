#include <stdio.h>

int main() {
    int year;
    printf("Introduce un año: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d es bisiesto.\n", year);
    } else {
        printf("%d no es bisiesto.\n", year);
    }
    return 0;
}
