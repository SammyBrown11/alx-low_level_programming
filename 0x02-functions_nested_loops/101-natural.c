#include "main.h"

/**
 * main - Prints the sum of all multiples
 * Return: Always (Success)
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 6 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", Z);
	return (0);
}
