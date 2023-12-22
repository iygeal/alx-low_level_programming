#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *next_node;

    /* Check if hash table is NULL */
	if (ht == NULL)
		return;

    /* Iterate through the array */
	for (i = 0; i < ht->size; i++)
	{
		/* Traverse the linked list at the current index */
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			/* Save the next node before freeing the current node */
			next_node = current_node->next;

			/* Free the key, value, and the node itself */
			free(current_node->key);
			free(current_node->value);
			free(current_node);

			current_node = next_node;
		}
	}

	/* Free the array and the hash table structure itself */
	free(ht->array);
	free(ht);
}
