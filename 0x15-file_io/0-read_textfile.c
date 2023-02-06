#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * Description: Write a function that reads a text file and prints it
 * @letters: des will ber here
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t b_read;
	ssize_t b_written;
	int fd;

	if (!(filename && letters))
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	b_read = read(fd, buffer, letters);
	close(fd);

	if (b_read < 0)
	{
		free(buffer);
		return (0);
	}

	if (!b_read)
		b_read = letters;

	b_written = write(STDOUT_FILENO, buffer, b_read);
	free(buffer);

	if (b_written < 0)
		return (0);

	return (b_written);
}
