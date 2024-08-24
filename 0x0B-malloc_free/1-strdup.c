#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string in new memory and grants it a pointer
 * @str: the string to be duplicated
 *
 * Return: pointer to the memory of the duplicated string
 */
char *_strdup(char *str)
{
	char *pointer;
	int i, j;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	pointer = malloc(sizeof(char) * (i + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		pointer[j] = str[j];
	}
	pointer[j] = '\0';
	return (pointer);
}
