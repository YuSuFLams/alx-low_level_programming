#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - entry point
 * description: copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int		fd_in, fd_out, s, count;
	char	buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_in = open(argv[1], O_RDONLY);
	if (fd_in < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_out < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((s = read(fd_in, buffer, BUFFER_SIZE)) > 0)
	{
		count = write(fd_out, buffer, s);
		if (count < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (s < -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_in) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in), exit(100);
	if (close(fd_out) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_out), exit(100);
	return (0);
}
