#include "main.h"

/**
 * print_triangle - entry point
 * owned by Bwave/Bright Daniel
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
        for (k = size - i; k >= 1; k--)
            _putchar(' ');
        for (j = 1; j <= i; j++)
            _putchar('#');
        _putchar('\n');
	}
}
