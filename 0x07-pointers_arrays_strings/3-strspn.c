#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The characters to be accepted
 *
 * Return: The number of bytes in the initial segment of s
 * which are in the accept string.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, n, value = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (n = 0; accept[n] != '\0'; n++)
        {
            if (accept[n] == s[i])
            {
                value++;
                break;
            }
        }

        if (accept[n] == '\0')
            return value;
    }

    return value;
}
