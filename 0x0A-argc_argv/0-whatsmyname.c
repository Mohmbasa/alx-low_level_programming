#include <stdio.h>

/**
 * main - prints 1st argument on the command line
 * @argc: number of arguments on the command line
 * @argv: array holding arguments on the command line
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
