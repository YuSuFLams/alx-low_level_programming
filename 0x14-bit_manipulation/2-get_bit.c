#include "main.h"
/**
 * get_bit - Write a function that returns the value of a bit.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: bit value in the index.
 * Return: the value of the bit.
 */
int	get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (!index)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));
}
