#include <stdio.h>

/**
 * main - A program that  prints all possible different
 * combinations of three digits.
 *
 * Return: 0 (Success)
 */
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
				{
					putchar(44);
					putchar(32);
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}
