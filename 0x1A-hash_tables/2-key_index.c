#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table array
 * @key: The key string
 * @size: The size of the array in the hash table
 * Return: The index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	int hash_index;

    /* Calculate the hash value using hash_djb2 function */
	hash_value = hash_djb2(key);

    /* Use the hash value to determine the index in the array */
	hash_index = hash_value % size;

	return (hash_index);
}
