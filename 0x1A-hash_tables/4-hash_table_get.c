#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

    /* Check if hash table or key is NULL */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL); /* Invalid input */

    /* Calculate the index in the array using key_index function */
	index = key_index((const unsigned char *)key, ht->size);

    /* Search the linked list at the calculated index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* Check if the key matches, return the associated value */
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);

		current_node = current_node->next;
	}

	return (NULL); /* Key not found */
}
