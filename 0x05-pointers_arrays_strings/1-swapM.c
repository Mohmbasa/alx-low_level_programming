#include <stdio.h>

void swap_int(int *a, int *b)
{
	int *c,*d;

	c = a;
	d = b;
	printf("%d", *c);
	*a = *d;
	*a++;
	*b = *c;
	printf("%d", *c);
}
