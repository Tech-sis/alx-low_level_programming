#include "dog.h"
#include <stdlib>
/**
 * init_dog - initializes struct dog
 * @d: pointer to dog
 * @name: pointer to string
 * @age: number
 * @owner: pointer to string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d !== NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
