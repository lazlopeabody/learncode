#include <stdio.h>
#include <stdlib.h>
#include <sys/file.h>
#include <sys/random.h>

#define BUFFER_SIZE 67108864
#define BUFFER_1 "buffer1"
#define BUFFER_2 "buffer2"

int main() {
    FILE *fOut, *fIn;

    printf("\nI/O test with traditional glibc functions.\n\n");
    printf("Allocating 64 MB buffer:                ");
    char *buffer = (char *) malloc(BUFFER_SIZE);
    printf("DONE\n");

    printf("Writing data to first buffer:           ");
    fOut = fopen(BUFFER_1, "wb");
    fwrite(buffer, sizeof(char), BUFFER_SIZE, fOut);
    fclose(fOut);
    printf("DONE\n");

    printf("Copying data from first file second:    ");
    fIn = fopen(BUFFER_1, "rb");
    fOut = fopen(BUFFER_2, "wb");
    fread(buffer, sizeof(char), BUFFER_SIZE, fIn);
    fwrite(buffer, sizeof(char), BUFFER_SIZE, fOut);
    fclose(fIn);
    fclose(fOut);
    printf("DONE\n");

    printf("Freeing Buffer:                         ");
    free(buffer);
    printf("DONE\n");

    printf("Deleting files:                         ");
    remove(BUFFER_1);
    remove(BUFFER_2);
    printf("DONE\n");

    return 0;
}