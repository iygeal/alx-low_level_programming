#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t prev;
	size_t i;
	size_t step;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	prev = 0;
	step = 0;

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (i = prev; i < size && i <= step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
