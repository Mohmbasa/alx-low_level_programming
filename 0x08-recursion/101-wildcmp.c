#include "main.h"

/**
 * wildcmp - introduces indexes for the strings
 * @s1: the 1st string
 * @s2: the 2nd string
 *
 * Return: 1 if similar and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	return (similarity_check(s1, s2, i, j));
}

/**
 * similarity_check - checks whether s1 and s2 are similar
 * @s1: the 1st string
 * @s2: the 2nd string
 * @i: index for s1
 * @j: index for s2
 *
 * Return: 1 if similar and 0 if not
 */
int similarity_check(char *s1, char *s2, int i, int j)
{
	if ((s1[i] == '\0') && (s2[j] == '\0'))
	{
		return (1);
	}
	else if (s1[i] == s2[j])
	{
		return (similarity_check(s1, s2, i + 1, j + 1));
	}
	else if (s2[j] == '*')
	{
		return (similarity_check(s1, s2, i, j + 1));
	}
	else if ((s2[j - 1] == '*') && (s1[i] != s2[j]))
	{
		return (similarity_check(s1, s2, i + 1, j));
	}
	return (0);
}
