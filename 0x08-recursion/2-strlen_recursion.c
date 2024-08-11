#include "main.h"

/**
 * _strlen_recursion - introduces an index for the string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int n;

	n = length_recurse(s, i);
	return (n);
}

/**
 * length_recurse - finds length of a string
 * @s: the string
 * @i: index for the string
 *
 * Return: length of string
 */
int length_recurse(char *s, int i)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	else
	{
		i = length_recurse(s, i + 1);
	}
	return (i);
}
