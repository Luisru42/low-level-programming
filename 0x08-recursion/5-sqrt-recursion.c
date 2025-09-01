#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root of n, or -1 if not found
 */
int _sqrt_recursion(int n)
{
    return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helps to find the square root
 * @n: number to find the square root of
 * @i: current guess
 *
 * Return: natural square root of n, or -1 if not found
 */
int sqrt_helper(int n, int i)
{
    if (i * i == n)
    {
        return (i);
    }
    if (i * i > n)
    {
        return (-1);
    }
    return (sqrt_helper(n, i + 1));
}
