#include "main.h"
/**
 * set_bit - Function that sets bit value to 1 at a given index
 * @n: A pointer to the number to be checked
 * @index: The index at which bit value will be changed
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		*n = *n | (1UL << index);
		return (1);
	}
	return (-1);
}
