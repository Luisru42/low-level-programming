#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
    if (str == NULL)
    {
        return (NULL);
    }
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    char *dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
    {
        return (NULL);
    }
    for (int i = 0; i < len; i++)
    {
        dup[i] = str[i];
    }
    dup[len] = '\0';
    return (dup);
}
