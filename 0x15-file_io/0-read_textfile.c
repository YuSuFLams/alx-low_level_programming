#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std-output.
 * @filename: the file to open.
 * @letters: number of letters it should read and print.
 * Return: number of letters it could read and print, or 0 if:
 * - filename is NULL.
 * - write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int		fd;
	ssize_t	count;
	char	*buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	count = read(fd, buffer, letters);
	if (count < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	count = write(STDOUT_FILENO, buffer, count);
	free(buffer);
	close(fd);
	if (count < 0)
		return (0);
	return (count);
}
