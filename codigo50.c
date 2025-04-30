#include <stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>

int main() {
    struct sockaddr_in target;
    target.sin_family = AF_INET;
    target.sin_addr.s_addr = inet_addr("127.0.0.1");

    for (int port = 1; port <= 100; port++) {
        int sock = socket(AF_INET, SOCK_STREAM, 0);
        target.sin_port = htons(port);
        if (connect(sock, (struct sockaddr*)&target, sizeof(target)) == 0)
            printf("Puerto %d abierto\n", port);
        close(sock);
    }
    return 0;
}