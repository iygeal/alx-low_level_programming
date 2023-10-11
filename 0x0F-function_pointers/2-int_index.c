#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: Array of integers
 * @size: Numbers of elements in the array
 * @cmp: Pointer to compare function
 * Return: -1, index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
