#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int	largest_number(int a, int b, int c)
{
	return (((a > b) ? a : b) > c ? ((a > b) ? a : b) : c);
}
