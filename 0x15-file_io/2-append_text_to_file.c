#include "main.h"

/**
 * a function that creates a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int	append_text_to_file(const char *filename, char *text_content)
{
	int	fd;
	int	len;
	int	count;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (close(fd), 1);
	for (len = 0; text_content[len]; len++)
		;
	count = write(fd, text_content, len);
	if (count < 0)
		return (close(fd), -1);
	return (close(fd), 1);
}
