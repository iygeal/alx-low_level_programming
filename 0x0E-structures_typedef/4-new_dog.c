#include "dog.h"
/**
 * new_dog - Function that creates a new dog
 * @name: The name of my dog
 * @age: The age of dog
 * @owner: I am the owner
 * Return: Returns pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int namelen, ownerlen, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (namelen = 0; name[namelen] != '\0' ;)
	{
		namelen++;
	}
	dog->name = malloc((namelen + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		dog->name[i] = name[i];
	dog->name[namelen] = '\0';
	dog->age = age;
	for (ownerlen = 0; owner[ownerlen] != '\0' ;)
	{
		ownerlen++;
	}
	dog->owner = malloc((ownerlen + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerlen; i++)
		dog->owner[i] = owner[i];
	dog->owner[ownerlen] = '\0';
	return (dog);
}
