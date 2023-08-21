#include"main.h"
#include<string.h>

/**
 * print_rev - chaeck code
 * @s: str.
 * Return: noo.
 */

void print_rev(char *s)
{
	int	len;

	len = strlen(s);
	while (--len >= 0)
		_putchar(*(s + len));
	_putchar('\n');
}
