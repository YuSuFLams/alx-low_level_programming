#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "_putchar\n";

	write(1, s, 9);
	return (0);
}
