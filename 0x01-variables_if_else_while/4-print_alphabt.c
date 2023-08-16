#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase,
 * except q and e. followed by a new line.
 * Return: 0
 */
int	main(void)
{
	char	test;

	test = 96;
	while (test++ < 122)
	{
		if (test == 113 || test == 101)
			continue;
		putchar(test);
	}
	putchar(10);
	return (0);
}
