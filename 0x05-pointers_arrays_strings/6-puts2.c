#include "main.h"

/**
 * puts2 - prints a string while skipping one character
 * @str: string to be printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
