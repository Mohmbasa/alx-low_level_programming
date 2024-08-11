#include "main.h"

/**
 * factorial - determines if number is greater, equal to or less than 0
 * @n: the number
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
