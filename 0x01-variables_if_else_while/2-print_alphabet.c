#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program prints the alphabet in lowercase, followed by a new line.
 * Return: 0 (Success)
 */
int	main(void)
{
	char	test;

	test = 96;
	while (test++ < 122)
		putchar(test);
	putchar(10);
	return (0);
}
