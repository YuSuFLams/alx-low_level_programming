#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count, s;
	char *buffer;

	if (filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (!fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	count = read(fd, buffer, letters);
	close(fd);
	if (count == -1)
	{
		free(buffer);
		return (0);
	}
	s = write(STDOUT_FILENO, buffer, count);
	free(buffer);
	if (count != s)
		return (0);
	return (s);
}
