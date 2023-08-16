#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: 0 (Success)
 */
int	main(void)
{
	int	i;

	i = -1;
	while (++i < 10)
		putchar(i + '0');
	putchar(10);
	return (0);
}
