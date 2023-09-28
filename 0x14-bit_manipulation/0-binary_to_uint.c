#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nb;

	nb = 0;
	if (!b)
		return (0);
	while (*b)
	{
		nb = nb << 1;
		if (*b == '1')
			nb = nb | 1;
		else if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (nb);
}
