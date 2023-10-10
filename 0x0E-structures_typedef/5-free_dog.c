#include "dog.h"

/**
 * free_dog - Function that frees dog parameters
 * @d: Pointer to dog_t data type
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
