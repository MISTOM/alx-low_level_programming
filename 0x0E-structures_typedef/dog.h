#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog structure datatype
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Description: stores the properties of the dog
 * stracture
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

char *_strdup(char *str);

void free_dog(dog_t *d);
#endif
