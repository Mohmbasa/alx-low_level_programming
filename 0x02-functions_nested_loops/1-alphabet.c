#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times, each followed by a new line
 */
void print_alphabet_x10(void)
{
	/* Initialize loop counter */
	int i = 0;
	/* Declare variable for alphabet letter */
	char letter;

	/* Loop through 10 times */
	while (i < 10)
	{
		/* Reset letter to 'a' at the start of each iteration */
		letter = 'a';

		/* Print each letter from 'a' to 'z' */
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		/* Print newline character after printing each set of alphabet */
		_putchar('\n');

		/* Increment loop counter */
		i++;
	}
}
