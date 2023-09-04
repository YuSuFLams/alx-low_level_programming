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
		str = av[i];
		slen = strlen(str) + 1; 
		len += slen;
	}

	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
    j = 0;
	for (int i = 0; i < ac; i++) 
    {
		strcpy(s + j, av[i]);
		j += strlen(av[i]);
		s[j] = '\n';
		j++;
	}
	str[j] = '\0';

	return (str);
}
