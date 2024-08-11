#include "main.h"

/**
 * _puts - prints individual characters of a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	if (str[i] == '\0')
	{
		_putchar('\n');
	}
}
