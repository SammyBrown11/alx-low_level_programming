#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int prev_term = 1;
    unsigned long int current_term = 2;
    unsigned long int next_term;
    int count;

    /* Print the first two Fibonacci numbers */
    printf("%lu, %lu", prev_term, current_term);

    /* Calculate and print the next 96 Fibonacci numbers */
    for (count = 3; count <= 98; count++)
    {
        next_term = prev_term + current_term;
        printf(", %lu", next_term);

        prev_term = current_term;
        current_term = next_term;
    }

    printf("\n");
    return 0;
}
