#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	len1, len2, i;
	char			*s;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
	{
		n = len2;
	}
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		*(s + i) = *(s1 + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(s + len1 + i) = *(s2 + i);
		i++;
	}
	*(s + len1 + i) = '\0';
	return (s);
}
