#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Struct for my doggie dog
 * @name: Name of my puppy
 * @age: Age of my puppy
 * @owner: I am the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
