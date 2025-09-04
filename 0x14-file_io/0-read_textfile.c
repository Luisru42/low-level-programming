#include "main.h"
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char *buf;
    ssize_t bytes_read, bytes_written;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
        return (0);

    bytes_read = read(fd, buf, letters);
    if (bytes_read == -1)
    {
        free(buf);
        return (0);
    }

    bytes_written = write(STDOUT_FILENO, buf, bytes_read);
    free(buf);
    close(fd);

    if (bytes_written == -1 || bytes_written != bytes_read)
        return (0);

    return (bytes_written);
}
