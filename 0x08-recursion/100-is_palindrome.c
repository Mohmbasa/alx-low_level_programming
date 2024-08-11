#include "main.h"

/**
 * is_palindrome - introduces indexes for the string
 * @s: the string
 *
 * Return: 1 if the string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;
	int len = strlen_recurse(s, j);

	return (check_palindrome(s, len - 1, i));
}

/**
 * strlen_recurse - determines length of string
 * @s: the string
 * @j: index for the string
 *
 * Return: length of string
 */
int strlen_recurse(char *s, int j)
{
	int k;

	if (s[j] == '\0')
	{
		return (j);
	}
	else
	{
		k = strlen_recurse(s, j + 1);
	}
	return (k);
}

/**
 * check_palindrome - checks whether the string is a palindrome
 * @s: the string
 * @len: string index from the end
 * @i: string index from the start
 *
 * Return: 1 if the string is a palindrome and 0 if not
 */
int check_palindrome(char *s, int len, int i)
{
	int j;

	if (len == -1)
	{
		return (1);
	}
	else if (s[i] == s[len])
	{
		if (len == 0)
		{

			return (1);
		}
		else
		{
			j = check_palindrome(s, len - 1, i + 1);
		}
	}
	else
	{
		return (0);
	}
	return (j);
}
