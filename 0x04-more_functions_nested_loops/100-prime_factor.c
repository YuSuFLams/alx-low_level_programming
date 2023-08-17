#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int nbr = 612852475143;
	long int i;

	for (i = 2; i < nbr; i++)
	{
		while (nbr % i == 0)
			nbr /= i;
	}

	printf("%ld\n", nbr);

	return (0);
}
