#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int	i;

	if ((char )c == 0)
		return ((char *)s + strlen(s));
	i = -1;
	while (*(s + (++i)))
		if (*(s + i) == (char )c)
			return ((char *)(s + i));
	return (NULL);
}
