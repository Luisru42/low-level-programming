#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if it failed
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    int len = _strlen(b);
    int base = 1;

    if (b == NULL)
        return (0);

    for (int i = len - 1; i >= 0; i--)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
        num += (b[i] - '0') * base;
        base *= 2;
    }

    return (num);
}
