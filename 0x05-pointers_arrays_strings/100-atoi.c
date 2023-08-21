#include "main.h"

/**
 * _atoi - convert a sing to an integer
 * @s: string to convert
 * Return: integer
 */
int	_atoi(char *s)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= (-1);
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
	{
		n = n * 10 + *s - '0';
		s++;
	}
	return ((int )n * sign);
}
