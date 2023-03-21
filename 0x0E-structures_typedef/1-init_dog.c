#include <stdio.h>
#include "dog.h"

/**
 * main - function for initialising the dog struct
 * @name - initialize the name
 * @age - initialize the age
 * @owner - initialize the owner
 * Return 0
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
