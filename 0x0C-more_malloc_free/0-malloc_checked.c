#include "main.h"
/**
 * malloc_checked - Function that allocates memory with malloc
 * @b: Size of memory
 *Return: Returns pointer on success or 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
