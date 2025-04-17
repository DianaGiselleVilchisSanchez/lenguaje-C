#include <stdio.h>
#define MAX 100

struct Termino {
    int coef;
    int exp;
};

void mostrar(struct Termino p[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%dx^%d", p[i].coef, p[i].exp);
        if (i != n - 1) printf(" + ");
    }
    printf("\n");
}

int main() {
    struct Termino p1[2] = {{3,2},{5,1}};
    struct Termino p2[2] = {{2,2},{-5,1}};
    struct Termino resultado[2];
    for (int i = 0; i < 2; i++) {
        resultado[i].coef = p1[i].coef + p2[i].coef;
        resultado[i].exp = p1[i].exp;
    }
    mostrar(resultado, 2);
    return 0;
}
