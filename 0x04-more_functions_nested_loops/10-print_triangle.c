#include "main.h"

void print_triangle(int size)
{
    if (size > 0)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (j <= size - i)
                {
                    _putchar(' ');
                }
                else
                {
                    _putchar('#');
                }
            }
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}
