#include "dog.h"
/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: A pointer of type struct dog
 * @name: Name of puppy
 * @age: Age of my doggie
 * @owner: I am the  owner
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
