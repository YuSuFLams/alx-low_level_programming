#include "main.h"

int	f_strchr(const char *s, char x)
{
	int	i;

	i = -1;
	while (*(s + (++i)))
		if (*(s + i) == x)
			return (1);
	return (0);
}
/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
    int	i;

	i = 0;
	while (*(s + i))
	{
		if (!f_strchr(accept, *(s + i)))
			break ;
		i++;
	}
	return (i);
}
