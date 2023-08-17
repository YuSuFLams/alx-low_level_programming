#include "main.h"

/**
*print_most_numbers - prints
* owned by Bwave ICT
*Return: void
*/

void print_most_numbers(void)
{
	char	test;

	test = '0';
	while (test++ < '9')
	{
		if (test == '2' || test == '4')
			continue;
		_putchar(test);
	}
	_putchar(10);
}
