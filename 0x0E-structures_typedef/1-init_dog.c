#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 *
 * @d: pointer to the struct dog.
 * @name: pointer to the name of the dog.
 * @age: age of the dog.
 * @owner: pointer to the owner's name as a string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
