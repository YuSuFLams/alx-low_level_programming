#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *s;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);

	i = -1;
	while (++i < len1)
		*(s + i) = *(s1 + i);
	j = -1;
	while (++j < len2)
		*(s + i + j) = *(s2 + j);
	*(s + i + j) = '\0';
	return (s);
}
