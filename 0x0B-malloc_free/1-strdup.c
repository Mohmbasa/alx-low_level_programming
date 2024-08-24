#include <stdio.h>
#include <stdlib.h>

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
