#include <stdio.h>
#include <ctype.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
char peek() { return stack[top]; }
int precedencia(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

int main() {
    char expr[100];
    printf("Ingrese expresión: ");
    scanf("%s", expr);
    for (int i = 0; expr[i]; i++) {
        char c = expr[i];
        if (isalnum(c)) printf("%c", c);
        else if (c == '(') push(c);
        else if (c == ')') {
            while (peek() != '(') printf("%c", pop());
            pop();
        } else {
            while (top != -1 && precedencia(peek()) >= precedencia(c))
                printf("%c", pop());
            push(c);
        }
    }
    while (top != -1) printf("%c", pop());
    printf("\n");
    return 0;
}
