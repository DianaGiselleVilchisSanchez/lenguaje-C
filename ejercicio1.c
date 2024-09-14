#include <stdio.h>
int main (){
    int x, y;
    int *p;
    p = &x;
    y = *p + 3;
    printf("El valor de y es: %d",y);
    return 0;
}