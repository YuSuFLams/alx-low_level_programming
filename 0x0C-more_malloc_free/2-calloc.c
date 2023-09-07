#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char			*s;
	unsigned int	i;

	if (!nmemb || !size)
		return (NULL);
	s = (char *)malloc(nmemb * size);
	if (!s)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		*(s + i) = 0;
	return (s);
}
