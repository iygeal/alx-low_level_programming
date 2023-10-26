#include "main.h"
/**
 * flip_bits - Function that shows number of bits to flip in order
 * to go from one number to another
 * @n: First number
 * @m: Second Number
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter = 0;

	diff = n ^ m;
	while (diff != 0)
	{
		diff = diff & (diff - 1);
		counter++;
	}
	return (counter);
}
