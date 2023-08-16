#include "main.h"

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 (success)
*/
int main(void)
{
	int sum = 0, i = 0;

	while (i++ < 1024)
	{
		if (!(i % 3) || !(i % 5))
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
