#include"main.h"
#include <string.h>

/**
 * rev_string - chaeck code
 * @s: str.
 * Return: noo.
 */

void rev_string(char *s)
{
	int	len;
	int	i;
	int	tmp;

	len = 0;
	i = 0;
	len = strlen(s) - 1;
	while (i < len)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = tmp;
		len--;
		i++;
	}
}
