#include "hash_tables.h"
/**
 * insert_into_sorted_list - Inserts a node into the sorted linked list
 * @ht: The sorted hash table
 * @new_node: The new node to be inserted
 * Return: 1 on success, 0 on failure
*/
int insert_into_sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current, *prev;

	if (ht == NULL || new_node == NULL)
		return (0); /* Invalid input*/

	/* Case: Empty sorted list */
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
		return (1);
	}
	/* Find the correct position in the sorted list */
	current = ht->shead;
	prev = NULL;
	while (current != NULL && strcmp(current->key, new_node->key) < 0)
	{
		prev = current;
		current = current->snext;
	}
	/* Insert the new node */
	new_node->sprev = prev;
	new_node->snext = current;
	if (prev != NULL)
		prev->snext = new_node;
	else
		ht->shead = new_node;
	if (current != NULL)
		current->sprev = new_node;
	else
		ht->stail = new_node;
	return (1);
}

/**
 * shash_table_set - Adds or updates an element in the sorted hash table
 * @ht: The sorted hash table to add/update the key/value in
 * @key: The key string
 * @value: The value associated with the key
 * Return: 1 if successful, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0); /* Invalid input */
	/* Calculate the index using the hash function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists, update the value if so */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0); /* Memory allocation error */
			return (1); /* Update successful */
		}
		current_node = current_node->next;
	}
	/* Create a new node for the kry/value pair */
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0); /* Memoery allocation failure */

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0); /* Memory allocation failure */
	}
	/* Insert the new node inside the sorted list */
	if (insert_into_sorted_list(ht, new_node) == 0)
	{
		/* Error inserting into sorted list */
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* Insert the new node into the hash table array */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1); /* Insert successful */
}
/**
 * shash_table_get - Retrieves a value associated with a key in the sorted HT
 * @ht: The sorted hash table to search in
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key is not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL); /* Invalid input */
	/* Calculate the index using the hash function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the calculated index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value); /* Key found, so return its value */
		current_node = current_node->next;
	}
	return (NULL); /* Key is not found */
}
/**
 * shash_table_print - Prints the hash table in ascending order
 * @ht: The sorted hash table to be printed
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;
	printf("{");
	current_node = ht->shead;
	while (current_node != NULL)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->snext;
		if (current_node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints the hash table in descending order
 * @ht: The sorted hash table to be printed in revserse
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;
	printf("{");
	current_node = ht->stail;
	while (current_node != NULL)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->sprev;
		if (current_node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *next_node;

	if (ht == NULL)
		return;

	/* Free the nodes in the sorted linked list */
	current_node = ht->shead;
	while (current_node != NULL)
	{
		next_node = current_node->snext;
		free(current_node->key);
		free(current_node->value);
		free(current_node);
		current_node = next_node;
	}
	/* Free the array and the hash table structure */
	free(ht->array);
	free(ht);
}
/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: Returns a pointer to the created sorted table, or NULL if it fails
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int i;

	/* Allocate memory for the sorted table structure */
	new_table = malloc(sizeof(shash_node_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers */
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	/* Initialize the array with NULL pointers */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}