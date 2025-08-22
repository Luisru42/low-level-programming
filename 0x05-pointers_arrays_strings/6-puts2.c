#include "main.h"

void puts2(char *str)
{
    int len = _strlen(str);
    for (int i = 0; i < len; i += 2)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
