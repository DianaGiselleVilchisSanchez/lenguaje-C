#include <stdio.h>


int main (){
    char cadena [10];
    printf ("Un int ocupa %ld bytes\n", sizeof(int));
    printf ("Un char ocupa %ld bytes\n", sizeof(char));
    printf ("Un float ocupa %ld bytes\n", sizeof(float));
    printf ("Un double ocupa %ld bytes\n", sizeof(double));
    printf ("Una cadena ocupa %ld bytes\n", sizeof(cadena));
}