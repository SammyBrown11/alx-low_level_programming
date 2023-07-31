#include "main.h"

int _putchar(char c)
{
    /* Code to output the character 'c' */
    /* Replace this with your own implementation or use the system's putchar */
    return write(1, &c, 1);
}

/**
 * print_chessboard - Prints the chessboard
 * @a: The 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
    int i, n;

    for (i = 0; i < 8; i++)
    {
        for (n = 0; n < 8; n++)
            _putchar(a[i][n]);
        _putchar('\n');
    }
}
