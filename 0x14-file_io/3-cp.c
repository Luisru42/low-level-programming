#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Copies content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    FILE *src, *dest;
    char buffer[1024];
    size_t n;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s source_file destination_file\n", argv[0]);
        return 1;
    }

    src = fopen(argv[1], "rb");
    if (!src) {
        perror("Error opening source file");
        return 1;
    }

    dest = fopen(argv[2], "wb");
    if (!dest) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    while ((n = fread(buffer, 1, sizeof(buffer), src)) > 0) {
        if (fwrite(buffer, 1, n, dest) != n) {
            perror("Error writing to destination file");
            fclose(src);
            fclose(dest);
            return 1;
        }
    }

    fclose(src);
    fclose(dest);

    return 0;
}
