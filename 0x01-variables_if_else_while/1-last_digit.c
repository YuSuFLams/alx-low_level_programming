#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int	main(void)
{
	int	n;
	int	l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;
	printf("Last digit of %d is %d ", n, l_digit);
	if (!l_digit)
		printf("and is 0");
	else if (l_digit > 5)
		printf("and is greater than 5");
	else
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
