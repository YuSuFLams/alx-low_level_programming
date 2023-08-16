#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
*/
void times_table(void)
{
	int i = -1;
	int j;
	int n;

	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
		{
			n = j * i;
			if (j == 0)
				_putchar('0');
			else if (n > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
