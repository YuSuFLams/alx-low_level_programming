#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, len = 0, slen;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		slen = strlen(av[i]) + 1;
		len += slen;
	}

	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		str = av[i];
		slen = strlen(str);
		strcpy(s + j, str);
		j += slen;
		s[j] = '\n';
		j++;
	}
	s[j] = '\0';

	return (s);
}
