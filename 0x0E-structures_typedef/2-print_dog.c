#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the values of the struct
 * @d: stracture dog
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %s\n", d->age ? d->age : "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
