#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *tmp;
	unsigned int i;

	if (!size)
		return (NULL);

	tmp = (char *)malloc(sizeof(char) * size);
	if (!tmp)
		return (NULL);

	for (i = 0; i < size; i++)
		tmp[i] = c;

	return (tmp);
}
