
#include "main.h"

/**
 * check - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:1 or 0
 */
int check_(int a, int b)
{
	if (b == a)
		return (1);
	if (a % b == 0)
		return (0);
	return (check_(a, b + 1));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (check_(n, 3));
}
