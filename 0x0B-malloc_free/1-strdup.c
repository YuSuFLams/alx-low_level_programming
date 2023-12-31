#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char	*s;
	int		i;

	if (!str)
		return (NULL);
	s = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (!s)
		return (s);
	i = -1;
	while (*(str + (++i)))
		*(s + i) = *(str + i);
	s[i] = '\0';
	return (s);
}
