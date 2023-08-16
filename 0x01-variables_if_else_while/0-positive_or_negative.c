#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int	main(void)
{
	int	n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (!n)
		printf("%d is zero", n);
	else
		(n > 0) ? printf("%d is positive", n) : printf("%d is negative", n);
	printf("\n");
	return (0);
}
