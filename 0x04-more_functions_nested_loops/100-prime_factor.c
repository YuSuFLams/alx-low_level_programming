#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int x = 612852475143;
	long int j;

	for (j = 2; j < x; j++)
	{
		if (x % j == 0)
		{
			x = x / j;
		}
	}
	printf("%ld\n", j);
	return (0);
}
