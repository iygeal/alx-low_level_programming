#include "search_algos.h"
#include <stdio.h>
#include <math.h>
int interpolation_search(int *array, size_t size, int value);
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			printf("Value checked array[%lu] is out of range\n", low);
			return (-1);
		}

		/* Calculate the probe position */
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (
			value - array[low]));

		/*Check if pos is out of range*/
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		/* If the value is found */
		if (array[pos] == value)
			return (pos);

		/* If the value is larger, value is in the upper part */
		if (array[pos] < value)
			low = pos + 1;
		/* If the value is smaller, value is in the lower part */
		else
			high = pos - 1;
	}

	/* Print the final out-of-range check */
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (
		value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
