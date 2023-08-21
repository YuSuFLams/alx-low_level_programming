#include"main.h"

/**
 * puts2 - put str.
 * @str: str.
 * Return: NA.
 */

void	puts2(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (!(i % 2))
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
