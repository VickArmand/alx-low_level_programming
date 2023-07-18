#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;

	nw_dog = malloc(sizeof(struct dog));
	if (nw_dog)
	{
		nw_dog->name = name;
		nw_dog->age = age;
		nw_dog->owner = owner;
		return (nw_dog);
	}
	return (NULL);
}
