#include "main.h"
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 *Owned by Bwave ICT/ Bright Daniel
 */
void print_number(int n)
{
	long	nbr;

	nbr = n;
	if (nbr >= 0 && nbr <= 9)
		_putchar(nbr + '0');
	else if (n < 0)
	{
		_putchar('-');
		print_number(nbr * (-1));
	}
	else
	{
		print_number(nbr / 10);
		print_number(nbr % 10);
	}
}
