#include <stdlib.h>
#include "main.h"

char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
    {
        return (NULL);
    }
    int total_len = 0;
    for (int i = 0; i < ac; i++)
    {
        int len = 0;
        while (av[i][len] != '\0')
        {
            len++;
        }
        total_len += len + 1; // +1 for the newline character
    }
    char *result = malloc(total_len * sizeof(char));
    if (result == NULL)
    {
        return (NULL);
    }
    int pos = 0;
    for (int i = 0; i < ac; i++)
    {
        int j = 0;
        while (av[i][j] != '\0')
        {
            result[pos++] = av[i][j++];
        }
        result[pos++] = '\n';
    }
    result[pos] = '\0';
    return (result);
}
