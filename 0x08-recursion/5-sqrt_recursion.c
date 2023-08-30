#include "main.h"

/**
 * check_ - Recursively checks for the square root of a number.
 * @a: The current value to be squared and checked.
 * @b: The number for which the square root is being sought.
 *
 * Return: The square root if found, or -1 if not.
 */
int check_(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check_(a + 1, b));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The integer for which the square root is being sought.
 *
 * Return: The natural square root if found, or -1 if not.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_(1, n));
}
