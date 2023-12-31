#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (*(dest + i))
		i++;
	j = -1;
	while (*(src + (++j)))
		*(dest + i + j) = *(src + j);
	*(dest + i + j) = '\0';
	return (dest);
}
