#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int		fd;
	char	*buffer;
	ssize_t	s;
	ssize_t	count;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer || !filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (free(buffer), 0);
	s = read(fd, buffer, letters);
	if (s == -1)
		return (free(buffer), close(fd), 0);
	count = write(STDOUT_FILENO, buffer, s);
	if (count == -1)
		return (free(buffer), close(fd), 0);
	return (free(buffer), close(fd), count);
}
