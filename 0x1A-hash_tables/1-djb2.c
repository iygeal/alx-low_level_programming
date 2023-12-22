#include "hash_tables.h"
/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 * @str: The string to hash
 * Return: The hash value
 *
 * Description:
 *   The djb2 algorithm is a simple hash function designed by
 *	Daniel J. Bernstein.
 *   It uses bitwise left shift and addition to simulate the
 * multiplication of the hash value by 33, providing a good
 * distribution of hash values.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381; /* Initialize hash variable */
	int c; /* Variable to store current character */

	while ((c = *str++)) /* Loop through each character in the string */
	{
		/* Update hash (using hash * 33 + c) with bitwise left shift */
		hash = ((hash << 5) + hash) + c;
	}

	return (hash); /* Return the final hash value */
}
