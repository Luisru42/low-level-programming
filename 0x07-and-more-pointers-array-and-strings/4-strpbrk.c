#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
    char *ptr;

    while (*s)
    {
        ptr = accept;
        while (*ptr)
        {
            if (*s == *ptr)
                return (s);
            ptr++;
        }
        s++;
    }
    return (NULL);
}
