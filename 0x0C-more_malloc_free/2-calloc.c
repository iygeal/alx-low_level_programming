#include "main.h"
/**
 * _calloc - Function that allocates memory to an array with malloc
 * @nmemb: Argument count
 * @size: Argument vector
 * Return: Returns pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *ptr;
	unsigned int i = 0, length = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	length = nmemb * size;
	ptr = malloc(length);

	if (ptr == NULL)
		return (NULL);
	while (i < length)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
