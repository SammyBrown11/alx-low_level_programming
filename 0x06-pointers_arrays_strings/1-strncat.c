#include "main.h"

/**
 * _strncat - Concatenates two strings
 * using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to Concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
	dest[len_dest + i] = src[i];
	}
	return (dest);
}
