#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest + _strlen(dest);
    while (*src && n--)
    {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return (dest);
}
