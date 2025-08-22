#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;
    while (*src && n--)
    {
        *ptr++ = *src++;
    }
    while (n--)
    {
        *ptr++ = '\0';
    }
    return (dest);
}
