#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content to enter the file
 *
 * Return: 1 on success and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int i;

	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_CREAT, 0622);
	if (fp == -1)
	{
		return (-1);
	}
	write(fp, text_content, i);
	close(fp);
	return (1);
}
