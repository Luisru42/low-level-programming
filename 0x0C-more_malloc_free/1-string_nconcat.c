#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    unsigned int len1 = 0, len2 = 0;
    while (s1[len1] != '\0')
    {
        len1++;
    }
    while (s2[len2] != '\0' && len2 < n)
    {
        len2++;
    }
    char *result = malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL)
    {
        return (NULL);
    }
    unsigned int i = 0;
    for (; i < len1; i++)
    {
        result[i] = s1[i];
    }
    for (unsigned int j = 0; j < len2; j++, i++)
    {
        result[i] = s2[j];
    }
    result[i] = '\0';
    return (result);
}
