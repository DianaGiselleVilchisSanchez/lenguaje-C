#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in server = {0};
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    inet_pton(AF_INET, "127.0.0.1", &server.sin_addr);
    connect(sock, (struct sockaddr*)&server, sizeof(server));

    char mensaje[] = "Hola servidor";
    send(sock, mensaje, strlen(mensaje), 0);
    char buffer[1024];
    recv(sock, buffer, sizeof(buffer), 0);
    printf("Respuesta: %s\n", buffer);
    close(sock);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in server = {0};
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    inet_pton(AF_INET, "127.0.0.1", &server.sin_addr);
    connect(sock, (struct sockaddr*)&server, sizeof(server));

    char mensaje[] = "Hola servidor";
    send(sock, mensaje, strlen(mensaje), 0);
    char buffer[1024];
    recv(sock, buffer, sizeof(buffer), 0);
    printf("Respuesta: %s\n", buffer);
    close(sock);
    return 0;
}
