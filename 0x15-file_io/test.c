#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: pointer to the name of the file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t n_read, n_written;
    char *buffer;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (0);

    /* Open the file */
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    /* Allocate memory for the buffer */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    /* Read the file */
    n_read = read(fd, buffer, letters);
    if (n_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Write to standard output */
    n_written = write(STDOUT_FILENO, buffer, n_read);
    if (n_written == -1 || n_written != n_read)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Clean up */
    free(buffer);
    close(fd);

    return (n_written);
}

