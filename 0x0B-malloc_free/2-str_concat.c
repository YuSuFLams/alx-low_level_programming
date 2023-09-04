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
	int i, j;
	char *s;

	s = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (!s)
		return (NULL);

	i = -1;
	while (*(s1 + (++i)))
		*(s + i) = *(s1 + i);
	j = -1;
	while (*(s2 + (++j)))
		*(s + i + j) = *(s2 + j);
	*(s + i + j) = '\0';
	return (s);
}
