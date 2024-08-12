#include <stdio.h>
#include <stdlib.h>

size_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t reed;
	void *arr;

	fp = fopen(filename, "r");
	//fread(fp, arr, letters);
	printf("%d\n", fprintf(fp));
	printf("read %ld bytes\n", reed);

	return (reed);
}
