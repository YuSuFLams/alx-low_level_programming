#include "main.h"

/**
 * more_numbers - nmbr fct
 * Bwave ICT file
 * Return: no return
 */

void more_numbers(void)
{
    int i, j;
	
    i = 0;
    while (i <= 14)
    {
        j = 0;
        while (j <= 14)
    }
    for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
}
