#include "search_algos.h"

/**
 * binary_search_ - performs binary search on a subarray
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the subarray
 * @right: ending index of the subarray
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int binary_search_(int *array, int left, int right, int value)
{
	int mid;
	int i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i > left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in an array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;
	size_t left;
	size_t right;

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = bound < size ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search_(array, left, right, value));
}
