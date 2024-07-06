#include <stdio.h>

/**
 * print_alphabet_reverse - Recursively prints the lowercase alphabet in reverse
 * @ch: Current character to print
 */
void print_alphabet_reverse(char ch)
{
	if (ch >= 'a')
	{
		putchar(ch);           /* Print the current character */
		print_alphabet_reverse(ch - 1); /* Recursively call with the previous character */
	}
}

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 * followed by a new line using only two putchar calls
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_reverse('z');
	putchar('\n');

	return (0);
}
