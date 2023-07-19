#include <stdio.h>

int main()
{
    int prev_term = 1;
    int current_term = 2;
    int next_term = 0;
    int sum_even_terms = 2;
    {
    while (next_term <= 4000000)
        next_term = prev_term + current_term;
        prev_term = current_term;
        current_term = next_term;
	{
        if (next_term % 2 == 0)
            sum_even_terms += next_term;
        }
    }

    printf("%d\n", sum_even_terms);
    return 0;
}
