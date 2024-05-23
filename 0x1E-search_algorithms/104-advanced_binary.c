#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints the current part of the array being searched
 * @array: pointer to the first element of the array to print
 * @left: starting index of the subarray
 * @right: ending index of the subarray
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - performs binary search recursively
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the subarray
 * @right: ending index of the subarray
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left,
							  size_t right, int value)
{
	size_t mid;

	if (right >= left)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value && (mid == left || array[mid - 1] < value))
			return (mid);
		if (array[mid] >= value)
			return (advanced_binary_recursive(array, left, mid, value));
		return (advanced_binary_recursive(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Advanced binary search algorithm
 * @array: pointer to the first
 * element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
