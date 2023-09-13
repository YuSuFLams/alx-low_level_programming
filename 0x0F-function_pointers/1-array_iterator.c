#include "function_pointers.h"
/**
 * array_iterator - iterates an array
 * @array: is an array
 * @size: is the size
 * @action: is a pointer to the function you need to use
*/
void    array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int	i;

	if (!array || !action)
	{
		return ;
	}
	else
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
