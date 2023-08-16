#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program prints the alphabet in lowercase,
 * then in uppercase. followed by a new line.
 *
 * Return: 0 (Success)
 */
int	main(void)
{
	char	test;

	/*print alphabet by use character in ASCII*/
	/* print lowercase*/
	test = 96;
	while (test++ < 122)
		putchar(test);
	/* print upppercase*/
	test = 64;
	while (test++ < 90)
		putchar(test);
	putchar(10);
	return (0);
}
