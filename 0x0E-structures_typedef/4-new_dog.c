#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;
	int i, l_name, l_owner;

	_dog = malloc(sizeof(*_dog));
	if (!(_dog) || !(name) || !(owner))
	{
		free(_dog);
		return (NULL);
	}
	for (l_name = 0; name[l_name]; l_name++)
		;
	for (l_owner = 0; owner[l_owner]; l_owner++)
		;
	_dog->name = malloc((l_name + 1) * sizeof(char));
	_dog->owner = malloc((l_owner + 1) * sizeof(char));
	if (!(_dog->name) || !(_dog->owner))
	{
		free(_dog->owner);
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	for (i = 0; i < l_name; i++)
		_dog->name[i] = name[i];
	_dog->name[i] = '\0';
	_dog->age = age;
	for (i = 0; i < l_owner; i++)
		_dog->owner[i] = owner[i];
	_dog->owner[i] = '\0';
	return (_dog);
}
