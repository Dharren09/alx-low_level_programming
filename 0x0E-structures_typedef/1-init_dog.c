#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intializes variable of type struct dog
 * @d: array
 * @name: name
 * @owner: owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
