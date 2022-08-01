#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - intializes variable of type struct dog
 * @d: ...
 * @name: ...
 * @owner: ...
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
