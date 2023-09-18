#include "main.h"
/**
 * swap_int - Swaps two integers
 * @a: First integer
 * @b: Second integer
 * I created an integer variable and named it swap
 * swap is to be used to equate to one of the integers
 * This is to avoid losing the value in the pointer (integer)
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
