#include <stdio.h>

/**
 * print_array - prints elements in an array
 * @a: the array
 * @n: size of the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != (n - 1))
		{
			printf("%d ,", a[i]);
		}
		else
		{
			printf("%d\n", a[n - 1]);
		}
		i++;
	}
}
