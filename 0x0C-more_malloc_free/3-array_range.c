#include "main.h"
/**
 * array_range - Function that creates array of integers
 * @min: The min source
 * @max: Max source
 * Return: Pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr, i, size = 0;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = (int *)malloc(size * sizeof(int));
		if (ptr == NULL)
			return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;
	return (ptr);
}
