#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes struct
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
