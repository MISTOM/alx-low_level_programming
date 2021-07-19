#include "dog.h"

/**
 * init_dog - initialize dog struct
 * @d: pointer to the structure
 * @name: name variable
 * @age: age of the struct dog
 * @owner: owner of the struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
