#include "main.h"
/**
 * create_array - This function creates an array of chars, and initializes
 * it with a specific char
 * @size: The size of the array
 * @c: The char
 * Return: Pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
