#include "main.h"

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, sum = 0, n;

	while (n2 <= 4000000)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		if (n2 % 2 == 0)
			sum += n2;
	}
	printf("%lu\n", sum);
	return (0);
}
