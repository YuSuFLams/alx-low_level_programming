#include "main.h"

/**
 * check_ - Checks if a number is prime.
 * @a: The number to be checked.
 * @b: The current divisor.
 *
 * This function checks whether the given number @a is prime by recursively
 * testing divisors starting from @b.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int	check_(int a, int b)
{
	if (b == a)
		return (1);
	if (a % b == 0)
		return (0);
	return (check_(a, b + 1));
}

/**
 * is_prime_number - States if a number is prime.
 * @n: The number to be checked.
 *
 * This function determines whether the given number @n is prime.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int	is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (check_(n, 3));
}
