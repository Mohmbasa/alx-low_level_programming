#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
