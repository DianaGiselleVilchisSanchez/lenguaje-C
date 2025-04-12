#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

int main() {
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    int count = 0;
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (strstr(dir->d_name, ".txt")) {
                char nuevo[100];
                sprintf(nuevo, "archivo_%d.txt", count++);
                rename(dir->d_name, nuevo);
                printf("Renombrado: %s -> %s\n", dir->d_name, nuevo);
            }
        }
        closedir(d);
    }
    return 0;
}