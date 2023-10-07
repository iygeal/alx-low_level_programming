#include "main.h"
/**
 * _realloc - Function that reallocates memory using malloc
 * @ptr: Pointer to old allocated memory
 * @old_size: Size in bytes for ptr
 * @new_size: Size in bytes for the new memory block
 * Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int i, _min = 0;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	ptr1 = ptr;

	if (new_size < old_size)
	{
		_min = new_size;
	}
	else
	{
		_min = old_size;
	}
	for (i = 0; i < _min; i++)
	{
		ptr2[i] = ptr1[i];
	}
	free(ptr);
	return (ptr2);
}
