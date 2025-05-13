//Ordenar arreglo con burbuja
#include <stdio.h>
#define N 6

int main() {
    int a[N] = {5, 2, 9, 1, 3, 6};
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - i - 1; j++)
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}