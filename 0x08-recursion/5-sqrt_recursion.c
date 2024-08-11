#include "main.h"

/**
 * _sqrt_recursion - introduces the sqrt finder
 * @n: the number which the sqrt is to be found
 *
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	int k;

	k = sqrt_recurse(n, i);
	return (k);
}

/**
 * sqrt_recurse - finds sqrt
 * @n: the number which the sqrt is to be found
 * @i: sqrt finder
 *
 * Return: sqrt
 */
int sqrt_recurse(int n, int i)
{
	int k;
	int l = i * i;

	if (l > n)
	{
		return (-1);
	}
	else if (l == n)
	{
		return (i);
	}
	else
	{
		k = sqrt_recurse(n, i + 1);
	}
	return (k);
}
