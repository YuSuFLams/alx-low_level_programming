#include <stdio.h>

/**
 * main - A program prints all possible
 * different combinations of two digits.
 *
 * Return: 0 (Success)
 */
int	main(void)
{
	int	a, b;

	a = -1;
	while (++a < 9)
	{
		b = a;
		while (b++ < 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
