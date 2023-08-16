#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowerca
 * se, followed by a new line.
 *
 * Return: 0 (Success)
 */
int	main(void)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = -1;
	while (++i < 16)
		putchar(base[i]);
	putchar(10);
	return (0);
}
