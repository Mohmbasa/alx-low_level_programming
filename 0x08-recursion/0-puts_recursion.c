#include "main.h"

/**
 * _puts_recursion - introduces an index for the string
 * @s: string to be indexed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	recurse(s, i);
}

/**
 * recurse - prints each character in a string
 * @s: string to be printed
 * @i: index for the character to be printed
 *
 * Return: nothing
 */
void recurse(char *s, int i)
{
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[i]);
		recurse(s, i + 1);
	}
}
