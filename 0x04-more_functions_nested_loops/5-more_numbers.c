#include "main.h"

/**
 * more_numbers - nmbr fct
 * Bwave ICT file
 * Return: no return
 */

void	more_numbers(void)
{
	int i, j;

	i = 0;
	while (i++ < 10)
	{
		j = -1;
		while (j++ < 14)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
