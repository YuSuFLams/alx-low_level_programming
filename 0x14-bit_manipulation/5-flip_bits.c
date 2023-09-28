#include "main.h"

/**
 * flip_bits - returns the nbr of bits you would
 * need to flip to get from one nbr to another
 * @n: nbr one.
 * @m: nbr two.
 * Return: nbr of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit;

	for (bit = 0; (n || m); n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit++;
	}

	return (bit);
}
