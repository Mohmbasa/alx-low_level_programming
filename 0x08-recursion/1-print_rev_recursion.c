#include "main.h"

/**
 * _print_rev_recursion - determines length of string
 * @s: the string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int len = _strlen(s);

	rev_recurse(s, len);
}

/**
 * rev_recurse - prints individual characters from last to first
 * @s: the string to be printed
 * @len: length of the string
 *
 * Return: nothing
 */
void rev_recurse(char *s, int len)
{
	if (len < -1)
	{
		return;
	}
	else
	{
		_putchar(s[len]);
		rev_recurse(s, len - 1);
	}
}
