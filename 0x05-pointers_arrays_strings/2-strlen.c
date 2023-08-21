#include"main.h"

/**
 * _strlen - check code.
 * @s: char.
 * Return: lenght of @s.
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}
