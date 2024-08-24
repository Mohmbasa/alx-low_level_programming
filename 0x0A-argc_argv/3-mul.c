#include <stdio.h>

/**
 * main - multiplies two arguments to print the answer
 * @argc: number of arguments on the command line
 * @argv: array holding the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = argv[1];
	b = argv[2];
	c = a * b;
	printf("%d\n", c);
	return (0);
}	
