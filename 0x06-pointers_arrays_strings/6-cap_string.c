#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int j;
	char src[] = " \t\n,;.!?\"(){}";

	if (*s >= 'a' && *s <= 'z')
		*s -= 32;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (src[j] == *s)
					*s -= 32;
			}
		}
		s++;
	}
	return (s);
}
