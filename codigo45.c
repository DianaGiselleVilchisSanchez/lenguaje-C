#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

typedef struct Nodo {
    char clave[20];
    int valor;
    struct Nodo *sig;
} Nodo;

Nodo* tabla[SIZE] = {NULL};

int hash(char *clave) {
    int suma = 0;
    for (int i = 0; clave[i]; i++) suma += clave[i];
    return suma % SIZE;
}

void insertar(char *clave, int valor) {
    int idx = hash(clave);
    Nodo *nuevo = malloc(sizeof(Nodo));
    strcpy(nuevo->clave, clave);
    nuevo->valor = valor;
    nuevo->sig = tabla[idx];
    tabla[idx] = nuevo;
}

void mostrar() {
    for (int i = 0; i < SIZE; i++) {
        Nodo *act = tabla[i];
        printf("[%d]: ", i);
        while (act) {
            printf("(%s,%d) ", act->clave, act->valor);
            act = act->sig;
        }
        printf("\n");
    }
}

int main() {
    insertar("uno", 1);
    insertar("dos", 2);
    insertar("tres", 3);
    mostrar();
    return 0;
}