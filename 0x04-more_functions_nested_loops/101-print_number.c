#include "main.h"
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 *Owned by Bwave ICT/ Bright Daniel
 */
void print_number(int n)
{
	unsigned int nbr = n;

	if (n < 0)
	{
		_putchar(45);
		nbr = -nbr;
	}
	if (nbr / 10)
	{
		print_number(nbr / 10);
	}
	_putchar(nbr % 10 + '0');
}
