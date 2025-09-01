#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0, j = 0;
    char *str;

    va_start(args, format);
    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                j = 1;
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                j = 1;
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                j = 1;
                break;
            case 's':
                str = va_arg(args, char *);
                if (!str)
                    str = "(nil)";
                printf("%s", str);
                j = 1;
                break;
        }
        i++;
        if (format[i] && j)
            printf(", ");
    }
    va_end(args);
    printf("\n");
}
