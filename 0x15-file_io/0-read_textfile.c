#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: text file to be read by read_textfile function.
 * @letters: number of letter it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 * always 0, if write fails and Filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w;
	ssize_t fd;
	ssize_t r;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (w);
}
