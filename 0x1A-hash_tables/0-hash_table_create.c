#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table of size @size
 * @size: Size of the array of hash tables
 * Return: Returns pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table;

	if (size <= 0)
		return (NULL);

	my_hash_table = malloc(sizeof(hash_table_t));
	if (my_hash_table == NULL)
		return (NULL);
	my_hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (my_hash_table->array == NULL)
	{
		free(my_hash_table);
		return (NULL);
	}
	my_hash_table->size = size;
	return (my_hash_table);
	}
