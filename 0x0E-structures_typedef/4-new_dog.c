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
	int name_l, owner_l, i;
	dog_t *dog_p;

	if (!name || !owner)
		return (NULL);
	dog_p = malloc(sizeof(dog_t));
	if (!dog_p)
		return (NULL);
	for (name_l = 0; name[name_l]; name_l++)
		;
	name_l++;
	dog->name = malloc(name_l * sizeof(char));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_l; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (owner_l = 0; owner[owner_l]; owner_l++)
		;
	owner_l++;
	dog->owner = malloc(owner_l * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner_l; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
