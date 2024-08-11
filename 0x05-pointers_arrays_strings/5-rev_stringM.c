#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	int j = _strlen(s);
	char *k = s;
	int i;
	int l;

	for(i = 0; s[i] != '\0'; i++)
	{
		k[i] = s[j - 1];
		printf("%c", k[i]);
		j--;
	}
	i++;
	k[i] = '\0';
	printf("me");
	for(l = 0; k[l] != '\0'; l++)
	{
		printf("i");
		s[l] = k[l];
		printf("%c", k[l]);
	}

}
