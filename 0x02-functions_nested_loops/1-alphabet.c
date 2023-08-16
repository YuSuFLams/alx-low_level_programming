#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char	test;

	test = 'a';
	while (test <= 'z')
	{
		_putchar(test);
		test++;
	}
	_putchar('\n');
}
