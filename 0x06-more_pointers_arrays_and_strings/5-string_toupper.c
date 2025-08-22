#include "main.h"

char *string_toupper(char *s)
{
    char *ptr = s;
    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr -= 32;
        }
        ptr++;
    }
    return (s);
}
