#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size:is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer allocate new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (!ptr)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);
	if (!s)
		return (NULL);
	for (i = 0; i < new_size; i++)
		s[i] = oldp[i];
	free(ptr);
	return (s);
}
