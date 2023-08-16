#include "main.h"
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, num, n1, n2, m1, m2;

	j = 1;
	num = 2;
	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", num);
		num = num + j;
		j = num - j;
	}
	m1 = num / 1000000000;
	m2 = num % 1000000000;
	n1 = j / 1000000000;
	n2 = j % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", m1 + (m2 / 1000000000));
		printf("%lu", m2 % 1000000000);
		m1 = m1 + n1;
		n1 = m1 - n1;
		m2 = m2 + n2;
		n2 = m2 - n2;
	}
	printf("\n");
	return (0);
}
