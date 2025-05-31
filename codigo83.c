//Verificador de fecha válida (sin años bisiestos)
#include <stdio.h>

int main() {
    int d, m, a;
    printf("Ingrese día: ");
    scanf("%d", &d);
    printf("Ingrese mes: ");
    scanf("%d", &m);
    printf("Ingrese año: ");
    scanf("%d", &a);
    if (m < 1 || m > 12) {
        printf("Mes inválido.\n");
        return 1;
    }
    int diasMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (d < 1 || d > diasMes[m -1]) {
        printf("Día inválido para el mes.\n");
        return 1;
    }
    printf("Fecha válida.\n");
    return 0;
}
