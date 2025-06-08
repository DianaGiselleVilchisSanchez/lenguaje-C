//Ordenamiento burbuja de un arreglo
#include <stdio.h>

int main() {
    int arr[5] = {5, 3, 8, 4, 2}, temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Arreglo ordenado: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}