#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
    if (min > max)
    {
        return (NULL);
    }
    int *array = malloc((max - min + 1) * sizeof(int));
    if (array == NULL)
    {
        return (NULL);
    }
    for (int i = 0; i <= max - min; i++)
    {
        array[i] = min + i;
    }
    return (array);
}
