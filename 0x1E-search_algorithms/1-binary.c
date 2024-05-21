#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to be searched
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (middle = left; middle < right; middle++)
			printf("%d, ", array[middle]);
		printf("%d\n", array[middle]); /* print last element and newline*/

		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value) /* value is in lower half */
			right = middle - 1;	   /* search lower half */
		else
			left = middle + 1; /* search upper half */
	}
	return (-1); /* value not found in array */
}
