#include "main.h"

void puts_half(char *str)
{
    int len = _strlen(str);
    if (len % 2 == 0)
    {
        for (int i = len / 2; i < len; i++)
        {
            _putchar(str[i]);
        }
    }
    else
    {
        for (int i = (len - 1) / 2; i < len; i++)
        {
            _putchar(str[i]);
        }
    }
    _putchar('\n');
}
