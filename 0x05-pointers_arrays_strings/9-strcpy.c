#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 *			including the terminating null
 * @dest: The destination string
 * @src: The source string
 * Return: The pointer to dest
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (*(src + (++i)))
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
