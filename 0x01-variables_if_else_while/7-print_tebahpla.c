#include <stdio.h>

/**
 * main - prints the alphabet in lowercase in reverse using putchar
 *
 * Return: 0 (Success)
 */
int	main(void)
{
	char	test;

	test = 123;
	while (--test >= 97)
		putchar(test);
	putchar(10);
	return (0);
}
