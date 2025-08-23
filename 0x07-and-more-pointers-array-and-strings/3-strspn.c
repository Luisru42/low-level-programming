#include "main.h"
#include <stddef.h>

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *ptr;

    while (*s)
    {
        ptr = accept;
        while (*ptr)
        {
            if (*s == *ptr)
            {
                count++;
                break;
            }
            ptr++;
        }
        if (!*ptr)
            break;
        s++;
    }
    return (count);
}
