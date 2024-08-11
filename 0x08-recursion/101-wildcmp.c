#include "main.h"

int wildcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	return (similarity_check(s1, s2, i, j));
}

int similarity_check(char *s1, char *s2, int i, int j)
{
	if ((s1[i] == '\0') && (s2[j] == '\0'))
	{
		return (1);
	}
	else if(s1[i] == s2[j])
	{
		return similarity_check(s1, s2, i + 1, j + 1);
	}
	else if (s2[j] == '*')
	{
		return similarity_check(s1, s2, i, j + 1);
	}
	else if ((s2[j - 1] == '*') && (s1[i] != s2[j]))
	{
		return similarity_check(s1, s2, i + 1, j);
	}
	return (0);
}
