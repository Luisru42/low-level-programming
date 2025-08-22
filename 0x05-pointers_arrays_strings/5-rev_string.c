#include "main.h"

void rev_string(char *s)
{
    char temp;
    int i, len;

    len = _strlen(s);
    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}
