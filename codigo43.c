#include <stdio.h>
#include <openssl/md5.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    FILE *file = fopen(argv[1], "rb");
    unsigned char data[1024], digest[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    size_t bytes;
    while ((bytes = fread(data, 1, 1024, file)) != 0)
        MD5_Update(&ctx, data, bytes);
    MD5_Final(digest, &ctx);
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++)
        printf("%02x", digest[i]);
    printf("\n");
    fclose(file);
    return 0;
}