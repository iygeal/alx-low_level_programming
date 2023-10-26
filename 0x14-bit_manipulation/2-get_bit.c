#include "main.h"
/**
 * get_bit - Function that returns the value of a bit
 * at a given index
 * @n: The number whose bit is to be checked
 * @index: The index
 * Return: Returns bit value on success, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(n) * 8)
		return ((n >> index) & 1);
	return (-1);
}
