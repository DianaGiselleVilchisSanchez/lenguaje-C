#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    char *ip = "127.0.0.1";
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    inet_pton(AF_INET, ip, &addr.sin_addr);

    for (int port = 1; port <= 1024; port++) {
        int sock = socket(AF_INET, SOCK_STREAM, 0);
        addr.sin_port = htons(port);
        if (connect(sock, (struct sockaddr*)&addr, sizeof(addr)) == 0) {
            printf("Puerto %d abierto\n", port);
        }
        close(sock);
    }
    return 0;
}