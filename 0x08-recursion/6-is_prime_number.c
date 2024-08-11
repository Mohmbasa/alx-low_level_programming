#include "main.h"

/**
 * is_prime_number - removes even numbers and 1s as they can't be prime numbers
 * @n: number to be determined if prime number of not
 *
 * Return: 1 if prime number and 0 if not
 */
int is_prime_number(int n)
{
	int i = 3;
	int j;

	if (n < 0)
	{
		n = n * -1;
	}
	if (!(n % 2))
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	else
	{
		j = prime_recurse(n, i);
	}
	return (j);
}

/**
 * prime_recurse - finds prime numbers
 * @n: the number to be determined whether prime number or not
 * @i: number to divide n
 *
 * Return: 1 if prime number and 0 if not
 */
int prime_recurse(int n, int i)
{
	int k;

	if (i == n)
	{
		return (1);
	}
	else if (!(n % i))
	{
		return (0);
	}
	else
	{
		k = prime_recurse(n, i + 2);
	}
	return (k);
}
