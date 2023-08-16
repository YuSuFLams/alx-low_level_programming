#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * if n is greater than 15 or less than 0, the function does nothing
 *
 * @n: the number of the times table
 *
 * Return: void
*/
void print_times_table(int n)
{
	int i = -1, j, m;

	if (n > 15 || n < 0)
		return;
	while (++i <= n)
	{
		j = -1;
		while (++j <= n)
		{
			m = j * i;
			if (!j)
				_putchar('0');
			else if (m >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 100) + '0');
				_putchar(((m / 10) % 10) + '0');
				_putchar((m % 10) + '0');
			}
			else if (m < 100 && m > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
