// Gestor de inventario con estructuras
#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct {
    int id;
    char nombre[30];
    int stock;
} Producto;

void listar(Producto p[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d | %s | Stock: %d\n", p[i].id, p[i].nombre, p[i].stock);
}

int main() {
    Producto productos[MAX] = {
        {1, "Mouse", 30},
        {2, "Teclado", 20},
        {3, "Monitor", 15}
    };
    listar(productos, 3);
    return 0;
}