#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	while (*(dest + i))
		i++;
	j = -1;
	while (++j < n && *(src + j))
		*(dest + i + j) = *(src + j);
	*(dest + i + j) = '\0';
	return (dest);
}
