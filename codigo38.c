#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("datos.csv", "r");
    char line[1024];
    printf("[\n");
    int first = 1;
    while (fgets(line, sizeof(line), fp)) {
        if (!first) printf(",\n");
        first = 0;
        char *token = strtok(line, ",");
        printf("  { ");
        int col = 0;
        while (token) {
            printf("\"col%d\": \"%s\"", col++, token);
            token = strtok(NULL, ",");
            if (token) printf(", ");
        }
        printf(" }");
    }
    printf("\n]\n");
    fclose(fp);
    return 0;
}