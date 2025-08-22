#include "main.h"

char *rot13(char *s)
{
    char *ptr = s;
    char *rot13_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13_replacements = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    while (*ptr)
    {
        for (int i = 0; i < 52; i++)
        {
            if (*ptr == rot13_chars[i])
            {
                *ptr = rot13_replacements[i];
                break;
            }
        }
        ptr++;
    }
    return (s);
}
