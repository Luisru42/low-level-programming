#include "main.h"

char *leet(char *s)
{
    char *ptr = s;
    char *leet_chars = "aeotl";
    char *leet_replacements = "43071";
    while (*ptr)
    {
        for (int i = 0; i < 5; i++)
        {
            if (*ptr == leet_chars[i])
            {
                *ptr = leet_replacements[i];
                break;
            }
        }
        ptr++;
    }
    return (s);
}
