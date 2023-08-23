#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'M') || (*s >= 'a' && *s <= 'm'))
			*s += 13;
		else if ((*s >= 'N' && *s <= 'Z') || (*s >= 'n' && *s <= 'z'))
			*s -= 13;
		s++;
	}
	return (s);
}
