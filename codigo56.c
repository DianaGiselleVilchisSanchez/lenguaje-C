// codigo46.c - Gestión básica de empleados
#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int id;
    char nombre[50];
    float salario;
} Empleado;

void registrarEmpleado(Empleado empleados[], int *contador) {
    if (*contador >= MAX) {
        printf("No se pueden registrar más empleados.\n");
        return;
    }

    printf("Ingrese ID: ");
    scanf("%d", &empleados[*contador].id);
    getchar(); // limpiar buffer

    printf("Ingrese nombre: ");
    fgets(empleados[*contador].nombre, 50, stdin);
    strtok(empleados[*contador].nombre, "\n"); // eliminar salto de línea

    printf("Ingrese salario: ");
    scanf("%f", &empleados[*contador].salario);

    (*contador)++;
    printf("Empleado registrado correctamente.\n\n");
}

void listarEmpleados(Empleado empleados[], int contador) {
    printf("\n--- Lista de Empleados ---\n");
    for (int i = 0; i < contador; i++) {
        printf("ID: %d | Nombre: %s | Salario: $%.2f\n",
               empleados[i].id, empleados[i].nombre, empleados[i].salario);
    }
}

int main() {
    Empleado empleados[MAX];
    int opcion, contador = 0;

    do {
        printf("\n1. Registrar empleado\n2. Listar empleados\n0. Salir\nOpción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                registrarEmpleado(empleados, &contador);
                break;
            case 2:
                listarEmpleados(empleados, contador);
                break;
            case 0:
                printf("Saliendo del sistema...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }

    } while (opcion != 0);

    return 0;
}
