#include "dog.h"

/**
 * free_dog - frees the allocated memories for the
 * structers dog
 * @d: dog struct
 */

void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
