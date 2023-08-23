#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i, j;
	char *str = "aAeEoOtTlL";
	char *dest = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; str[j]; j++)
			if (s[i] == str[j])
				s[i] = dest[j];
	}
	return (s);
}
