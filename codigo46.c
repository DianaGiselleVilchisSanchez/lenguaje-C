#include <stdio.h>
#include <unistd.h>

int main() {
    FILE *fp = fopen("log.txt", "r");
    fseek(fp, 0, SEEK_END);
    while (1) {
        char buffer[256];
        if (fgets(buffer, sizeof(buffer), fp))
            printf("%s", buffer);
        else
            sleep(1);
    }
    fclose(fp);
    return 0;
}