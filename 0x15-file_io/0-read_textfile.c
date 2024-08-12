#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_text - reads and ouputs text of a file to terminal
 * @filename: name of file to be accessed
 * @letters: numbers of charaters to be read and written
 *
 * Return: number of written characters if successful and 0 if not
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t c_written;
	ssize_t c_read;
	char *arr;

	fp = open(filename, O_RDONLY);
	if (filename == NULL)
	{
		return (0);
	}
	if (fp == -1)
	{
		return (0);
	}
	arr = malloc(sizeof(char) * letters);
	if (arr == NULL)
	{
		close(fp);
		return (0);
	}
	c_read = read(fp, arr, letters);
	c_written = write(STDOUT_FILENO, arr, c_read);
	if (c_written == -1)
	{
		free(arr);
		close(fp);
		return (0);
	}
	free(arr);
	close(fp);

	return (c_written);
}
