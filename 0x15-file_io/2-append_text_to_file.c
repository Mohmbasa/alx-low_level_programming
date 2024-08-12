#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int c_read;
	int i;
	char *arr;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_RDWR);
	if (fp == -1)
	{
		return (-1);
	}
	arr = malloc(sizeof(char) * 100);
	c_read = read(fp, arr, 100);
	if (c_read == -1)
	{
		return (-1);
	}
	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	write(fp, text_content, i);
	free(arr);
	close(fp);
	return (1);
}
