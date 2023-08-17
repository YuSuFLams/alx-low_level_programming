#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
	char test;

    test = '0';
    while (test <= '9')
	    _putchar(test++);
	_putchar('\n');
}
