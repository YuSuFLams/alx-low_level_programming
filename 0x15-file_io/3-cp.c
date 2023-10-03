#include "main.h"

/**
 * main - entry point
 * description: copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_in, fd_out, count, s;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* open file_from */
	fd_in = open(argv[1], O_RDONLY);
	if (fd_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* open file_to */
	fd_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* read from file_from and write to file_to */
	while ((count = read(fd_in, buf, 1024)) > 0)
	{
		s = write(fd_out, buf, count);
		if (s == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_in) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in);
		exit(100);
	}
	if (close(fd_out) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_out);
		exit(100);
	}
	return (0);
}