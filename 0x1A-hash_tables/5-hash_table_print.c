#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int first_pair = 1; /* Flag to check if it's the first key-value pair */

    /* Check if hash table is NULL */
	if (ht == NULL)
		return;

	printf("{");
    /* Iterate through the array */
	for (i = 0; i < ht->size; i++)
	{
		/* Traverse the linked list at the current index */
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			/* Print comma and space if it's not the first pair */
			if (first_pair)
				first_pair = 0;
			else
				printf(", ");

			/* Print the key and value in the specified format */
			printf("'%s': '%s'", current_node->key, current_node->value);

			current_node = current_node->next;
		}
	}
	printf("}\n");
}
