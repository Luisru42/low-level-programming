#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
    if (s1 == NULL && s2 == NULL)
    {
        return (NULL);
    }
    int len1 = 0, len2 = 0;
    while (s1 && s1[len1] != '\0')
    {
        len1++;
    }
    while (s2 && s2[len2] != '\0')
    {
        len2++;
    }
    char *concat = malloc((len1 + len2 + 1) * sizeof(char));
    if (concat == NULL)
    {
        return (NULL);
    }
    int i = 0;
    while (i < len1)
    {
        concat[i] = s1[i];
        i++;
    }
    while (i < len1 + len2)
    {
        concat[i] = s2[i - len1];
        i++;
    }
    concat[i] = '\0';
    return (concat);
}
