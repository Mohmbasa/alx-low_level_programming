#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting from 0
 * @n: The number of the times table to print
 *
 * Description: Prints the times table up to n, formatted with proper spacing.
 *              Does not print anything if n is greater than 15 or less than 0.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;
			if (j == 0)
				printf("%d", result);
			else
				printf("%4d", result); /* Adjust spacing for alignment */
			if (j < n)
				printf(",");
		}
		printf("\n");
	}
}
