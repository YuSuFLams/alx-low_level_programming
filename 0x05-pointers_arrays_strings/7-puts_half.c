#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	len = strlen(str);
	i = !(len % 2) ? len / 2 : (len + 1) / 2;
	while (*(str + i))
		_putchar(*(str + i++));
	_putchar('\n');
}
