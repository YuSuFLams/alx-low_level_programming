#include "main.h"

/**
 * inCharSet - checks if a character is in a set of characters
 * @c: character to be checked
 * @accept: string containing the characters to match
 * Return: 1 if c is in accept, 0 otherwise
 */
int	f_strchr(const char *s, char x)
{
	int	i;

	i = -1;
	while (*(s + (++i)))
		if (*(s + i) == x)
			return (0);
	return (1);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 */
char *_strpbrk(char *s, char *accept)
{
	if (!s || !accept)
		return (NULL);
	while (*s)
	{
		if (!f_strchr(accept, *s))
			return ((char *)s);
		s++;
	}
	return (NULL);
}
