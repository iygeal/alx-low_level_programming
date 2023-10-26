#include "main.h"
/**
 * clear_bit - Function that sets the bit value at a given index to 0
 * @n: Pointer to the number
 * @index: The index at which bit value will be changed to 0
 * Return: 1 = success, -1 = failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		*n = *n & ~((1UL << index));
		return (1);
	}
	return (-1);
}
