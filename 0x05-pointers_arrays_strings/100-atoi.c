#include "main.h"

/**
 * _atoi - convert a sing to an integer
 * @s: string to convert
 * Return: integer
 */
int	_atoi(char *s)
{
	unsigned int	n;
	int				sign;

	n = 0;
	sign = 1;
	while (*s)
	{
		if (*s == '-')
			sign *= (-1);
		else if (*s >= '0' && *s <= '9')
			n = n * 10 + *s - '0';
		else if (n > 0)
			break;
		s++;
	}
	return (n * sign);
}
