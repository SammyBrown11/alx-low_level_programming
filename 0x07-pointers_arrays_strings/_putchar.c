#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * on error, -1 is required, and errno is set appropriately
 */
int _putchar.c(char c)
{
	return (write(1, &c, 1));
}
