// Conversor simple de base decimal a hexadecimal
#include <stdio.h>

void aHex(int n) {
    if (n == 0) return;
    aHex(n / 16);
    int dig = n % 16;
    if (dig < 10) printf("%d", dig);
    else printf("%c", 'A' + dig - 10);
}

int main() {
    int num;
    printf("Ingrese número decimal: ");
    scanf("%d", &num);
    if (num == 0) printf("0");
    else aHex(num);
    printf("\n");
    return 0;
}
