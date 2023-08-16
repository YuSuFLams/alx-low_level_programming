#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 */
int	main(void)
{
	int	i;

	i = -1;
	while (++i <= 9)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
