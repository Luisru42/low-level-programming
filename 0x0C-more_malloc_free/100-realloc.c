#include <stdlib.h>
#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (new_size == old_size)
    {
        return (ptr);
    }
    if (ptr == NULL)
    {
        return (malloc(new_size));
    }
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }
    void *new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return (NULL);
    }
    unsigned int min_size = old_size < new_size ? old_size : new_size;
    for (unsigned int i = 0; i < min_size; i++)
    {
        ((char *)new_ptr)[i] = ((char *)ptr)[i];
    }
    free(ptr);
    return (new_ptr);
}
