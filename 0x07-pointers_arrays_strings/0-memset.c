#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area
 */
char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n)
		*(s + i) = b;
	return (s);
}
