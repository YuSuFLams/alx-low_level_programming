#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char src[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (!i)
				*(s + i) -= 32;
			else
			{
				j = 0;
				while (j <= 12)
				{
					if (src[j] == *(s + i - 1))
						*(s + i) -= 32;
					j++;
				}
			}
		}
		i++;
	}
	return (s);
}
