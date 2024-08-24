#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int index;
	int s2index;
	char *newstr;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		i++;
		j++;
	}
	newstr = malloc(sizeof(char) * (i + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index] != '\0'; index++)
	{
		newstr[index] = s1[index];
	}
	for (s2index = 0; s2[s2index] != '\0'; index++)
	{
		newstr[index] = s2[s2index];
		s2index++;
	}
	newstr[i] = '\0';
	return (newstr);
}
