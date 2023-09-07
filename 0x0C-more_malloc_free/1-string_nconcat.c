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

	if (!s1)
	{
		len1 = 0;
	}
	else
	{
		len1 = ft_strlen(s1);
	}
	if (!s1)
	{
		len2 = 0;
	}
	else
	{
		len2 = ft_strlen(s2);
	}
	if (n > len2)
	{
		n = len2;
	}
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(s + i) = *(s1 + i);
	for (i = 0; i < len2; i++)
		*(s + len1 + i) = *(s2 + i);
	*(s + len1 + i) = '\0';
	return (s);
}
