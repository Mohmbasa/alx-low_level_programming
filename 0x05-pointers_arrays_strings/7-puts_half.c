#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int n;

	if ((len % 2))
	{
		len = len - 1;
	}
	n = len / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
