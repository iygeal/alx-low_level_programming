#include "main.h"
/**
 * reverse_array - Reverses contents of an array
 * @a: An array of integers
 * @n: Number of characters in the integer
 * Return: 0 = Success
 */
void reverse_array(int *a, int n)
{
	int i;
	int store;

	for (i = 0; i < n / 2; i++)
	{
		store = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = store;
	}
}
