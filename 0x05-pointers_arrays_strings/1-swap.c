#include "main.h"

/**
 * swap_int - check the code
 * @a: int.
 * @b: int.
 * Return: Always 0.
 */

void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
