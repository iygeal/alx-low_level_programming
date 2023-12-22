#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - Creates a new hash node and initializes it
 * @key: The key for the new node
 * @value: The value associated with the key
 * Return: A pointer to the new node, or NULL if creation fails
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL); /* Memory allocation failed */

    /* Duplicate key and value for the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);

    /* Check if strdup failed for key or value */
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL); /* Memory allocation failed */
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add/update the key/value in
 * @key: The key string
 * @value: The value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

    /* Check if hash table or key is NULL */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0); /* Invalid input */

    /* Calculate the index in the array using key_index function */
	index = key_index((const unsigned char *)key, ht->size);

    /* Check if there is a collision (linked list exists at the index) */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* Check if the key already exists, update the value and return */
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);

			if (current_node->value == NULL)
				return (0); /* Memory allocation failed */
			return (1); /* Successfully updated value */
		}
		current_node = current_node->next;
	}

    /* No collision, create a new node */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0); /* Memory allocation failed */

    /* Add the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1); /* Successfully added a new node */
}
