
#include "main.h"

/**
 * check - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:1 or 0
 */
int check_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
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
	else
	return (check_prime(n, 3));
}
