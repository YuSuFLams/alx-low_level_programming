#include"main.h"

/**
 * _puts - put str.
 * @str: str.
 * Return: NA.
 */

void	_puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
