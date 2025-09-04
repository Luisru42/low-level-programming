#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index
 * @n: pointer to the number to modify
 * @index: the index of the bit to clear
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(*n) * 8)
        return (-1);
    *n &= ~(1UL << index);
    return (1);
}
