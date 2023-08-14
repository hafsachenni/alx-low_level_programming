#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: dogs name
 * @age: his age
 * @owner: his owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));


	d->name = name;
	d->age = age;
	d->owner = owner;
}
