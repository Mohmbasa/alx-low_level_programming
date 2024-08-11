#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	char *pointer;

	dest = src;
	pointer = dest;
	printf("%s %s\n", src, dest);
	return(pointer);
}
